/*5. Dynamic Memory Allocation
Goal: Allocate, reallocate, and free memory dynamically for different data types and structures while avoiding memory leaks.
Activity:
1. Allocate memory for an array using malloc.
2. Expand or shrink the allocated memory using realloc.
3. Initialize the allocated memory using calloc.
4. Free allocated memory after use.
5. Handle cases where allocation fails.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    // 1. Allocate memory using malloc
    arr = (int *)malloc(4 * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter 4 elements:\n");

    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array elements:\n");

    for(int i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    // 2. Expand memory using realloc
    int *temp = realloc(arr,6*sizeof(int));

    if(temp == NULL)
    {
        printf("Reallocation failed\n");
        free(arr);
        return 1;
    }

    arr = temp;

    printf("Enter 2 more elements:\n");

    for(int i=4;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("New array:\n");

    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    // 3. Allocate using calloc
    int *arr2 = (int *)calloc(5,sizeof(int));

    if(arr2 == NULL)
    {
        printf("Calloc allocation failed\n");
        free(arr);
        return 1;
    }

    printf("Array from calloc (initialized to 0):\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }

    printf("\n");

    // 4. Free allocated memory
    free(arr);
    free(arr2);
}