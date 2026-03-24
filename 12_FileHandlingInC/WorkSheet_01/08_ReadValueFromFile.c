/*8. Read a value from a file into a variable, and also write a variable’s value back into a file.
Input: File name: number.txt (contains: 42)
Output: Read variable: 42; After writing value 100, file now contains: 100*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "number.txt";
    int num;

    // Open file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s for reading.\n", filename);
        return 1;
    }

    // Read integer from file
    fscanf(file, "%d", &num);
    fclose(file);

    printf("Read variable: %d\n", num);

    // Update the variable
    num = 100;

    // Open file for writing (overwrite existing content)
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file %s for writing.\n", filename);
        return 1;
    }

    // Write new value to file
    fprintf(file, "%d", num);
    fclose(file);

    printf("After writing value %d, file now contains: %d\n", num, num);

    return 0;
}