/*15. Change all the letters in a file to uppercase.
Input: File name: info.txt (content: Hello World!)
Output: HELLO WORLD!*/
#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>

int main() {
    FILE *fptr;
    char filename[] = "Copy.txt";
    long size;
    char *buffer;

    // Open file in read mode
    fptr = fopen(filename, "r");
    if (!fptr) {
        perror("File");
        return 1;
    }

    // Find file size
    fseek(fptr, 0, SEEK_END);
    size = ftell(fptr);
    rewind(fptr);

    // Allocate memory and read file into buffer
    buffer = (char*)malloc(size + 1);
    if (!buffer) {
        printf("Memory error!\n");
        fclose(fptr);
        return 1;
    }
    fread(buffer, 1, size, fptr);
    buffer[size] = '\0';
    fclose(fptr);

    // Convert to uppercase
    for (long i = 0; i < size; i++) {
        buffer[i] = toupper(buffer[i]);
    }

    // Open file in write mode and save changes
    fptr = fopen(filename, "w");
    if (!fptr) {
        perror("File");
        free(buffer);
        return 1;
    }
    fwrite(buffer, 1, size, fptr);
    fclose(fptr);
    free(buffer);

    printf("File converted to uppercase successfully.\n");
    return 0;
}