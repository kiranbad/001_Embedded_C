/*Question: Count prime numbers
Question description: Write a C program to count and display all prime numbers in an array.
Sample data:
Input: 2 4 5 6 7 8
Expected output:
Primes: 2 5 7
Count: 3*/
#include <stdio.h>
int is_prime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}


void count_primes(int arr[], int size)
{
    int count = 0;

    printf("Primes: ");

    for (int i = 0; i < size; i++)
    {
        if (is_prime(arr[i]))
        {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nCount: %d\n", count);
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    count_primes(arr, size);

    return 0;
}