/*Question: Difference between max and min
Question description: Write a C program to find the difference between largest and smallest elements in an array.
Sample data:
Input: 5 1 9 3 6
Expected output:
Difference: 8*/
#include <stdio.h>
#include <limits.h>

int find_difference(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    return max - min;
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    if(size <= 0)
    {
        printf("Invalid size\n");
        return 0;
    }

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int diff = find_difference(arr, size);

    printf("Difference: %d\n", diff);

    return 0;
}