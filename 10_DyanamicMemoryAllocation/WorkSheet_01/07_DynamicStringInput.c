/*Exercise 7: Dynamic String Input
Goal: Handle strings with dynamic memory allocation.
Activity:
Ask the user to enter a string.
Find its length using strlen.
Allocate memory to store the string using malloc.
Copy the string to the new memory.
Print the copied string.
Free the memory.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    char *copy;
    int len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(copy, str);

    printf("Copied string: %s\n", copy);

    free(copy);

    return 0;
}