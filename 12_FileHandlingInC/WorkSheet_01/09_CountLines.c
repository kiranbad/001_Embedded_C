/*9. Count how many lines are present in a text file.
Input: File name: lines.txt
Output: Total lines: 5*/
#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "lines.txt";
    char ch;
    int lines = 0;

    // Open file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;  // count newline characters
        }
    }

    fclose(file);

    // If the last line doesn't end with '\n', count it as well
    file = fopen(filename, "r");
    fseek(file, -1, SEEK_END);
    if (ftell(file) > 0) {
        fseek(file, -1, SEEK_END);
        if (fgetc(file) != '\n') {
            lines++;
        }
    }
    fclose(file);

    printf("Total lines: %d\n", lines);

    return 0;
}