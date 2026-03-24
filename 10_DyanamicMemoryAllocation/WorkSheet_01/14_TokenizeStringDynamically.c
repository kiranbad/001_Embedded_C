/*Exercise 14: Tokenize String Dynamically
Goal: Store each word of a sentence in dynamically allocated memory.
Activity:
Accept a sentence as input.
Use strtok() to split it into words.
Use malloc to copy each token into a new memory block.
Store them in a pointer array.
Print all words and free each block.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[1000];
    char *words[100];  // Array of pointers to store words
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    size_t len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Tokenize the sentence
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        words[count] = (char *)malloc(strlen(token) + 1);
        if (words[count] == NULL) {
            printf("Memory allocation failed.\n");
            // Free previously allocated memory before exiting
            for (int i = 0; i < count; i++) {
                free(words[i]);
            }
            return 1;
        }
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    printf("Words in the sentence:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
        free(words[i]);  // Free each word
    }

    return 0;
}