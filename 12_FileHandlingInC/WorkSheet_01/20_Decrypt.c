/*20. Decrypt a scrambled (encrypted) file and make it readable again.
Input: File name: secret.txt (content: encrypted)
Output: File now contains: my password*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "secret.txt";
    char ch;
    int key = 3;  // same key used for encryption

    // Open file in read+write mode
    fptr = fopen(filename, "r+");
    if (!fptr) {
        perror("File");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        fseek(fptr, -1, SEEK_CUR);       // move back to overwrite
        fputc(ch - key, fptr);           // subtract key to decrypt
        fflush(fptr);                     // ensure write happens
    }

    fclose(fptr);
    printf("File decrypted successfully.\n");

    return 0;
}