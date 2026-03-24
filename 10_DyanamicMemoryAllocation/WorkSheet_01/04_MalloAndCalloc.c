/*Exercise 4: Compare malloc and calloc
Goal: Learn the key difference between malloc and calloc.
Activity:
Allocate two arrays using malloc and calloc with the same size.
Print the default values in both arrays.
Use a loop for printing to understand initialization differences.
Free both arrays.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr_malloc, *arr_calloc;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr_malloc = (int *)malloc(n * sizeof(int));
    arr_calloc = (int *)calloc(n, sizeof(int));

    if(arr_malloc == NULL || arr_calloc == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nValues in malloc array (may contain garbage): ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr_malloc[i]);
    }

    printf("\nValues in calloc array (initialized to 0): ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");

    free(arr_malloc);
    free(arr_calloc);
    arr_malloc = arr_calloc = NULL;

    return 0;
}