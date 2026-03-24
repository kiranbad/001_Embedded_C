// Question: Count negative elements
// Question description: Write a C program to count total number of negative elements in an array.
// Sample data:
// Input: -1 3 -4 5 0 -7
// Expected output:
// Total negative elements: 3

#include <stdio.h>
void Count_Neg_Num(int *arr, int size)
{
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int neg_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            neg_count++;
    }

    printf("Total negative elements: %d\n", neg_count);
}
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    Count_Neg_Num(arr, size);
}