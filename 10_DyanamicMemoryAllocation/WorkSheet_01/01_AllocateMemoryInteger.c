/*Objective: Build confidence and expertise through guided practice
Exercise 1: Allocate Memory for an Integer
free()
Goal: Understand how to allocate memory for a single variable using malloc.
Activity:
Log Session a pointer to an integer.
Use malloc to allocate memory for one integer.
Assign a value to that memory.
Print the value through the pointer.
Free the allocated memory.
Include NULL check after malloc.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // Allocate memory for one integer
    ptr = (int *)malloc(sizeof(int));

    // Check if malloc succeeded
    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign value to allocated memory
    *ptr = 42;

    // Print value through pointer
    printf("Value: %d\n", *ptr);

    // Free allocated memory
    free(ptr);
    ptr = NULL; // Good practice

    return 0;
}