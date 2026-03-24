/*26. Find out how big a file is (in bytes).
Input: File name: a.txt
Output: Size: 36 bytes*/
#include <stdio.h>

int main() {
    FILE *fptr = fopen("a.txt", "r");
    if (!fptr) {
        perror("File");
        return 1;
    }

    // Move to end of file
    fseek(fptr, 0, SEEK_END);

    // Get current position (file size in bytes)
    long size = ftell(fptr);

    fclose(fptr);

    printf("Size of file: %ld bytes\n", size);
    return 0;
}