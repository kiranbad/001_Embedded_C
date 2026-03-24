/*4. Nested Union
Log Session a union called 
Number which contains an 
int and a nested union with a 
Write code to assign and access values from both the outer and inner union members.*/
#include <stdio.h>

union Number
{
    int i;   // outer union member

    union Inner   // nested union
    {
        float f;
        char c;
    } inner;
};

int main()
{
    union Number num;

    // Assign value to outer union member
    num.i = 50;
    printf("Outer union int value: %d\n", num.i);

    // Assign value to inner union float
    num.inner.f = 12.5;
    printf("Inner union float value: %f\n", num.inner.f);

    // Assign value to inner union char
    num.inner.c = 'A';
    printf("Inner union char value: %c\n", num.inner.c);

    return 0;
}