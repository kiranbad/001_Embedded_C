/*Question: Find second largest element
Question description: Write a C program to find the second largest number in the array.
Sample data:
Input: 10 20 50 40
Expected output:
Second largest: 40
*/
#include <stdio.h>
#include <limits.h>

int find_second_largest(int arr[], int size)
{
    if (size < 2)
        return -1;   

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    if (size < 2)
    {
        printf("Need at least 2 elements\n");
        return 0;
    }

    int arr[size];

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = find_second_largest(arr, size);

    if (result == INT_MIN)
        printf("No second largest element\n");
    else
        printf("Second largest: %d\n", result);

    return 0;
}