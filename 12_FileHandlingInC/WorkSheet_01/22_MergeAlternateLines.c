/*22. Merge alternate lines from two files into a third file.
Input: File 1: a.txt (A1, A2)
File 2: b.txt (B1, B2)
New file: merge.txt
Output: merge.txt: A1, B1, A2, B2*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1 = fopen("a.txt", "r");
    FILE *file2 = fopen("b.txt", "r");
    FILE *merge = fopen("merge.txt", "w");

    if (!file1 || !file2 || !merge) {
        perror("Error opening files");
        return 1;
    }

    char line1[256], line2[256];

    while (1) {
        // Read line from file1
        if (fgets(line1, sizeof(line1), file1)) {
            fputs(line1, merge);
        } else {
            line1[0] = '\0'; // mark EOF
        }

        // Read line from file2
        if (fgets(line2, sizeof(line2), file2)) {
            fputs(line2, merge);
        } else {
            line2[0] = '\0'; // mark EOF
        }

        // If both files reached EOF, break
        if (line1[0] == '\0' && line2[0] == '\0') {
            break;
        }
    }

    fclose(file1);
    fclose(file2);
    fclose(merge);

    printf("Files merged alternately into merge.txt\n");
    return 0;
}