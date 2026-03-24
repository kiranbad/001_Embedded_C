/*23. Take everything from one file and append it to the end of another file.
Input: File1: main.txt (Main)
File2: extra.txt (Extra)
Output: main.txt now contains: Main, Extra*/
#include <stdio.h>

int main() {
    FILE *fileMain = fopen("main.txt", "a"); // open in append mode
    FILE *fileExtra = fopen("extra.txt", "r"); // open in read mode
    char ch;

    if (!fileMain || !fileExtra) {
        perror("Error opening files");
        return 1;
    }

    // Read from extra.txt and write to main.txt
    while ((ch = fgetc(fileExtra)) != EOF) {
        fputc(ch, fileMain);
    }

    fclose(fileMain);
    fclose(fileExtra);

    printf("Content of extra.txt appended to main.txt successfully.\n");
    return 0;
}