/*18. Display the lines of a file in reverse order (from last to first).
Input: File name: lines.txt
Output: Shows lines from bottom to top*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char filename[] = "lines.txt";
    char *lines[100];       // store up to 100 lines
    char buffer[256];
    int count = 0;

    fptr = fopen(filename, "r");
    if (!fptr) {
        perror("File");
        return 1;
    }

    // Read all lines into memory
    while (fgets(buffer, sizeof(buffer), fptr)) {
        lines[count] = malloc(strlen(buffer) + 1);
        strcpy(lines[count], buffer);
        count++;
    }
    fclose(fptr);

    // Print lines in reverse order
    printf("Lines in reverse order:\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", lines[i]);
        free(lines[i]);  // free memory
    }

    return 0;
}