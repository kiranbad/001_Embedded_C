/*Question: Remove duplicate elements
Question description: Write a C program to remove duplicate elements from an array.
Sample data:
Input: 2 3 2 4 3 5
Expected output:
Array after removing duplicates: 2 3 4 5 */
#include <stdio.h>

void remove_duplicate(int *arr, int size, int *uniq, int *n)
{
    for(int i = 0; i < size; i++)
    {
        int flag = 0;

        for(int j = 0; j < *n; j++)
        {
            if(arr[i] == uniq[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            uniq[*n] = arr[i];
            (*n)++;
        }
    }
}

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    int uniq[size];   
    int n = 0;        

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    remove_duplicate(arr, size, uniq, &n);

    printf("After Removing Duplicates: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", uniq[i]);
    }

    return 0;
}