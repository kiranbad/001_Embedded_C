/*Exercise 2: Allocate and Store a List of Integers
Goal: Practice allocating memory for an array of integers.
Activity:
Ask the user to enter the number of integers.
Allocate memory dynamically using malloc based on input.
Use a loop to take integer inputs into the allocated array.
Display the entered values.
Free the allocated memory.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if allocation succeeded
    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values into the array
    for(i = 0; i < n; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the entered values
    printf("\nEntered integers: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    arr = NULL;

    return 0;
}