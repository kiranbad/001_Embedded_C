/*Rotate array by k positions
http://192.168.2.101/link/225#bkmrk-question-description-22
 
Question description:
Write a C program to rotate the elements of an array by k positions to the right.
Sample data:
Input: 1 2 3 4 5 k = 2
Expected output:
Output: 4 5 1 2 3*/
#include <stdio.h>

void ReverseArray(int *arr, int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;   
        start++;
        end--;
    }
}

void right_rotate(int arr[], int size, int n)
{
    n = n % size;
    ReverseArray(arr, 0, size - 1);
    ReverseArray(arr, 0, n - 1);
    ReverseArray(arr, n, size - 1);
}

int main()
{
    int size, n;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Rotate by: ");
    scanf("%d", &n);

    right_rotate(arr, size, n);

    printf("Rotated array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}