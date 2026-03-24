// Question: Reverse an array
// Question description: Write a C program to reverse an array in-place.
// Sample data:
// Input: 10 20 30 40 50
// Expected output:
// Reversed array: 50 40 30 20 10
#include <stdio.h>
void Reverse_array(int *arr, int size)
{
    int end = size - 1, start = 0;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int size;
    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    Reverse_array(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}