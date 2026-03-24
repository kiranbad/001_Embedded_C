/*3. Variadic Max-Min Function Challenge

Description
Write a C program to find the maximum and minimum values of a variable number of integers passed as arguments to a function using variadic functions.

Key Concept: Use stdarg.h to process each integer, compare and update max and min values.

Sample Input & Output
Function calls:
find_max_min(5, 3, 5, 9, 0, 7)
Output:
Maximum value: 9
Minimum value: 0

Explanation
The first argument is the count of integers, followed by the values. The function finds both maximum and minimum among them.*/
#include<stdio.h>
#include<stdarg.h>

void find_max_min(int count, ...)
{
    int num, max, min;
    va_list args;

    va_start(args, count);

    max = min = va_arg(args, int);   // first number

    for(int i = 1; i < count; i++)
    {
        num = va_arg(args, int);

        if(num > max)
            max = num;

        if(num < min)
            min = num;
    }

    va_end(args);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
}

int main()
{
    find_max_min(5, 3, 5, 9, 0, 7);
    return 0;
}