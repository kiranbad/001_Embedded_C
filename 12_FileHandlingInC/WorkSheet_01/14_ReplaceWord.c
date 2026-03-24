/*14. Replace every use of a chosen word in a file with a different word.
Input: File name: info.txt
Word to replace: file
Replacement: document
Output: Content after: This is a test document.*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char filename[] = "lines.txt";
    char line[256];
    char word[50], replace[50];

    printf("Word to replace: ");
    scanf("%s", word);
    printf("Replacement: ");
    scanf("%s", replace);

    // Open file for reading and writing
    fptr = fopen(filename, "r+");
    if (!fptr) {
        perror("File");
        return 1;
    }

    long pos = 0;
    while (fgets(line, sizeof(line), fptr)) {
        char *found = strstr(line, word);
        if (found) {
            fseek(fptr, pos, SEEK_SET);       // go to start of line in file
            // replace word (simple version, assumes same length)
            int len = strlen(word);
            for (int i = 0; i < len; i++) {
                fputc(replace[i], fptr);
            }
            fseek(fptr, 0, SEEK_CUR);         // move after replaced part
        }
        pos = ftell(fptr);
    }

    fclose(fptr);
    printf("Replacement done!\n");
    return 0;
}