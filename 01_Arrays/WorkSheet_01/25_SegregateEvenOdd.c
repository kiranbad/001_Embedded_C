/*Question: Segregate even and odd
Question description: Write a C program to arrange all even numbers first and then all odd numbers.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
Even numbers: 2 4 6
Odd numbers: 1 3 5*/
#include <stdio.h>

void segregate_even_odd(int arr[], int size)
{
    printf("Even numbers: ");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
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

    segregate_even_odd(arr, size);

    return 0;
}