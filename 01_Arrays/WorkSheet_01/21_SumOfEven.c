/*
Question: Sum of even numbers
Question description: Write a C program to find the sum of all even numbers in an array.
Sample data:
Input: 2 3 4 5 6
Expected output:
Sum of even numbers: 12*/
#include <stdio.h>

int sum_even(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    return sum;
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

    int result = sum_even(arr, size);

    printf("Sum of even numbers: %d\n", result);

    return 0;
}