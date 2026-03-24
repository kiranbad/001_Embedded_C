/* Swapping Two Numbers Using Pointers
Goal: Understand how to pass variables by reference to functions using pointers.
Activity:
Write a swap function: void swap(int *a, int *b)
In main(), declare two integers and call swap(&x, &y);
Print values before and after swapping.*/
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("After Swapping\na=%d\nb=%d",a,b);
}