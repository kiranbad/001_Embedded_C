/*Garbage Pointer
Goal: Understand what happens when a pointer is used without initialization.
Activity:
Declare an uninitialized pointer 
Try printing 
int *p;
*p and observe the issue (garbage value or crash).
Then fix by assigning a valid address.1*/
#include<stdio.h>
int main()
{
    int *p;
    printf("%d",*p);// segmentation fault
    int a=10;
    p=&a;
    printf("%d\n",*p);
}
