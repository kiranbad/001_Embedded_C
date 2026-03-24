/* Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6 */

#include <stdio.h>

void merge_array(int *arr1, int *arr2, int size1, int size2, int *mergedArray)
{

    for (int i = 0; i < size1; i++)
    {
        mergedArray[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        mergedArray[size1 + i] = arr2[i];
    }
}

int main()
{
    int size1, size2;

    printf("Enter the size1 and size2 : ");
    scanf("%d%d", &size1, &size2);

    int arr1[size1];
    int arr2[size2];
    int mergedArray[size1 + size2];

    printf("Enter the array1 elements : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the array2 elements : ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge_array(arr1, arr2, size1, size2, mergedArray);

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}