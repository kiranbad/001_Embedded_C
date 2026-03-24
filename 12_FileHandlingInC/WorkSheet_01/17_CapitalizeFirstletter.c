/*17. Capitalize the first letter of each word in a file.
Input: File name: info.txt (content: hello world!)
Output: Hello World!*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[] = "lines.txt";
    char ch, prev = ' ';  // treat start as space

    // Open file in read+write mode
    fptr = fopen(filename, "r+");
    if (!fptr) {
        perror("File");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        // If previous char is space, capitalize current char
        if (isspace(prev) && isalpha(ch)) {
            fseek(fptr, -1, SEEK_CUR);   // move back to overwrite
            fputc(toupper(ch), fptr);    // write capital
        }
        prev = ch;
    }

    fclose(fptr);
    printf("File updated with capitalized words.\n");
    return 0;
}