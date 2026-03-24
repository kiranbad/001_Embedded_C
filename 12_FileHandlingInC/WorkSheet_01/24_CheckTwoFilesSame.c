/*24. Check if two files are exactly the same or not.
Input: File1: a.txt, File2: b.txt
Output: Files are identical or Files are different*/
#include <stdio.h>

int main() {
    FILE *file1 = fopen("a.txt", "r");
    FILE *file2 = fopen("b.txt", "r");
    char ch1, ch2;

    if (!file1 || !file2) {
        perror("Error opening files");
        return 1;
    }

    int identical = 1;  // assume files are identical

    // Compare files character by character
    while (1) {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if (ch1 != ch2) {
            identical = 0;
            break;
        }

        if (ch1 == EOF || ch2 == EOF) {
            // If both EOF, files are same
            if (ch1 != ch2) identical = 0;
            break;
        }
    }

    if (identical)
        printf("Files are identical.\n");
    else
        printf("Files are different.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}