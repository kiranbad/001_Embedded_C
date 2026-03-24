/*13. Change a particular line in a file to some new text. 
Input: File name: lines.txt Line number: 3
New text: This line has been changed! 
Output: File now contains new text at line 3.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char filename[] = "lines.txt";
    char *lines[100];        // store up to 100 lines
    char buffer[256], newText[256];
    int count = 0, lineNum, i;

    // Open file for reading
    fptr = fopen(filename, "r");
    if (!fptr) {
        perror("File: ");
        return 1;
    }

    // Read all lines into memory
    while (fgets(buffer, sizeof(buffer), fptr)) {
        lines[count] = malloc(strlen(buffer) + 1);
        strcpy(lines[count], buffer);
        count++;
    }
    fclose(fptr);

    // Get the line number and new text
    printf("Enter the line number to change: ");
    scanf("%d", &lineNum);
    getchar();  // consume newline
    printf("Enter new text: ");
    fgets(newText, sizeof(newText), stdin);

    // Replace the specified line
    if (lineNum >= 1 && lineNum <= count) {
        free(lines[lineNum - 1]);
        lines[lineNum - 1] = malloc(strlen(newText) + 1);
        strcpy(lines[lineNum - 1], newText);
    } else {
        printf("Invalid line number.\n");
        return 1;
    }

    // Write all lines back to the file
    fptr = fopen(filename, "w");
    for (i = 0; i < count; i++) {
        fputs(lines[i], fptr);
        free(lines[i]);
    }
    fclose(fptr);

    printf("Line %d updated successfully.\n", lineNum);
    return 0;
}