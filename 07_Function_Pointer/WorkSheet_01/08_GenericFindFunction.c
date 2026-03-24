/*8. Generic Find Function
Implement a generic function find that takes an integer array, its size, and a function pointer as a condition.
Log Session condition functions (e.g., isEven, isPositive, isPrime).
Use find to identify and print the first element matching the provided condition.*/
#include <stdio.h>

int isEven(int num)
{
    return num % 2 == 0;
}

int isPositive(int num)
{
    return num > 0;
}

int isPrime(int num)
{
    if(num <= 1)
        return 0;

    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

void find(int arr[], int size, int (*condition)(int))
{
    for(int i = 0; i < size; i++)
    {
        if(condition(arr[i]))
        {
            printf("First matching element: %d\n", arr[i]);
            return;
        }
    }

    printf("No matching element found\n");
}

int main()
{
    int arr[] = {3, -4, 7, 8, 9};
    int size = 5;

    printf("Checking Even:\n");
    find(arr, size, isEven);

    printf("Checking Positive:\n");
    find(arr, size, isPositive);

    printf("Checking Prime:\n");
    find(arr, size, isPrime);

    return 0;
}