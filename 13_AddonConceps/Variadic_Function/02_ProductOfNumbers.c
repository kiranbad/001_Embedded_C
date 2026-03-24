/*2. Variadic Product Function Challenge

Description
Write a C program to compute the product of any number of integers passed as arguments to a function using variadic functions.

Key Concept: Use stdarg.h macros to process a variable number of integer arguments.

Sample Input & Output
Function calls:
product(3, 1, 2, 3) → Output: 6
product(4, 1, 2, 3, 4) → Output: 24
product(3, -1, -2, -3) → Output: -6

Explanation
The first argument is the count of values, followed by that many integers. The function returns their product.*/


#include<stdio.h>
#include<stdarg.h>
int product(int count, ...)
{
    va_list args;
    int prod=1;
    va_start(args,count);
    for(int i=0; i<count; i++)
    {
        prod*=va_arg(args,int);
    }
    va_end(args);
    return prod;
}

int main()
{
    printf("%d\n",product(5,2,2,2,2,2));
}