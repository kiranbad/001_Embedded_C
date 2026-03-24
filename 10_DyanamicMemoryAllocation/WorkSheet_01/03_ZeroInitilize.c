/*Exercise 3: Zero-Initialize an Integer Array
Goal: Understand how calloc initializes memory.
Activity:
Ask the user for the number of elements.
Allocate memory using calloc.
Print the initial values (before user input).
Assign values, then display them.
Free the memory after use.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Initial values: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEntered values: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}