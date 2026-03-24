/* Using * (Dereference) Operator
Goal: Learn how to access or modify a variable's value using a pointer.
Activity:
Declare int a = 10;
Log Session int *p = &a;
Change the value at the pointer: *p = 20;
Print a and *p to verify both are 20.*/
#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    *p=20;
    printf("a=%d\n*p=%d",a,*p);

}