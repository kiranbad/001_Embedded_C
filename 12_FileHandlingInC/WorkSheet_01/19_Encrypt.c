/**/
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "secret.txt";
    char ch;
    int key = 3;  // simple shift value

    // Open file in read+write mode
    fptr = fopen(filename, "r+");
    if (!fptr) {
        perror("File");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        fseek(fptr, -1, SEEK_CUR);       // move back to overwrite
        fputc(ch + key, fptr);           // shift character
        fflush(fptr);                     // ensure write happens
    }

    fclose(fptr);
    printf("File encrypted successfully.\n");

    return 0;
}