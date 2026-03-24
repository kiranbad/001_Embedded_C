/*1. Variadic Sum Function Challenge

Description
Write a C program to compute the sum of any number of integers passed as arguments to a function using variadic functions.

Key Concept: Use stdarg.h macros (va_list, va_start, va_arg, va_end) to access a variable number of arguments.

Sample Input & Output
Function calls:
sum(3, 1, 2, 3) → Output: 6
sum(5, 1, 2, 3, 4, 5) → Output: 15
sum(3, -1, -2, -3) → Output: -6

Explanation
The first argument is the count of values, followed by that many integers. The function returns their sum.
*/

#include<stdio.h>
#include<stdarg.h>

int sum(int count, ...)
{
    int sum=0,n;
    va_list args;
    va_start(args, count);
    for(int i=0; i<count; i++)
    {
        n=va_arg(args,int );
        sum+=n;
    }
    va_end(args);
    return sum;
}
int main()
{
    printf("%d",sum(5,10,10,10,10,5));
}