/*8. Dynamic Allocation of 2D Register Block
Goal: Dynamically allocate and manage a two-dimensional register map for peripheral configuration.
Activity:
Allocate memory for a 4x4 matrix of 32-bit registers using double pointers:
uint32_t **reg_block;
reg_block = malloc(rows * sizeof(uint32_t *));
for (int i = 0; i < rows; i++)
  reg_block[i] = malloc(cols * sizeof(uint32_t));
Initialize the matrix elements with example register values.
Print the matrix values via pointer dereferencing.
Free all allocated memory properly after use.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int rows = 4, cols = 4;
    uint32_t **reg_block;

    reg_block = malloc(rows * sizeof(uint32_t*));

    for(int i = 0; i < rows; i++)
    {
        reg_block[i] = malloc(cols * sizeof(uint32_t));
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            reg_block[i][j] = (i+1)*100 + j;
        }
    }

    printf("Register block values:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%u ", *(*(reg_block + i) + j));
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++)
    {
        free(reg_block[i]);
    }

    free(reg_block);

    return 0;
}