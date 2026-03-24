/*Exercise 8: Implement Custom strdup()
Goal: Practice duplicating a string using dynamic memory.
Activity: Log Session a function that takes a string as input.
Allocate memory for a copy of the string. Copy character by character.
Return the copied string. Call this function and display the result. Free the copied string.*/
#include <stdio.h>
#include <stdlib.h>

char* my_strdup(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    char *copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL) {
        return NULL;
    }

    for (int i = 0; i <= len; i++) {
        copy[i] = s[i];
    }

    return copy;
}

int main() {
    char str[1000];
    char *copy;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    copy = my_strdup(str);
    if (copy == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Copied string: %s\n", copy);

    free(copy);

    return 0;
}
