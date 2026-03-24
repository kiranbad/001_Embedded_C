/*Exercise 5: Reallocate an Array Dynamically
Goal: Use realloc to extend an array as needed.
Activity:
Allocate memory for 2 integers.
Ask the user for values.
Then resize the array to 5 integers using realloc.
Accept more values into the resized array.
Print all values.
Free the memory at the end.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    arr = (int *)malloc(2 * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < 2; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    arr = (int *)realloc(arr, 5 * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    for(i = 2; i < 5; i++)
    {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nAll values in the array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}