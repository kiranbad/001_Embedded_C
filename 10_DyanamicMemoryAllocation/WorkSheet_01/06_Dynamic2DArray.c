/*Exercise 6: Log Session a Dynamic 2D Array
Goal: Learn how to allocate and access a 2D array dynamically.
Activity:
Ask the user for number of rows and columns.
Allocate memory for an array of row pointers.
Allocate each row separately using malloc.
Accept values for each row-column index.
Display the matrix.
Free each row and then the row pointer array.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int **matrix;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    matrix = (int **)malloc(rows * sizeof(int *));


    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        }
    

    // Accept values
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}