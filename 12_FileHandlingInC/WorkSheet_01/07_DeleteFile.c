/*7. Delete a file from the computer.
Input: File name: temp.txt
Output: File 'temp.txt' deleted.*/
#include <stdio.h>

int main() {
    char filename[] = "copy.txt";

    // Attempt to delete the file
    if (remove(filename) == 0) {
        printf("File '%s' deleted.\n", filename);
    } else {
        printf("Error: Could not delete file '%s'.\n", filename);
    }

    return 0;
}