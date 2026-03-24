// Question: Count even and odd elements
// Question description: Write a C program to count how many even and odd numbers are in the array.
// Sample data:
// Input: 4 7 9 10 22
// Expected output:
// Even: 3
// Odd: 2

#include <stdio.h>
void Count_Even_Odd(int *arr, int size)
{
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even : %d\nOdd : %d\n", even, odd);
}
int main()
{
    int size;
    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    Count_Even_Odd(arr,size);
}