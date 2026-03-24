/*
Question: Split array into halves
Question description: Write a C program to split the array into two halves and print them separately.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
First half: 1 2 3
Second half: 4 5 6*/

#include <stdio.h>

void split_array(int arr[], int size)
{
    int mid = size / 2;

    printf("First half: ");
    for(int i = 0; i < mid; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSecond half: ");
    for(int i = mid; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    split_array(arr, size);

    return 0;
}