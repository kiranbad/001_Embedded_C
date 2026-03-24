/*10. Write a C program to determine whether a number is odd or even using bitwise operators.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num&1)
    printf("Odd");
    else
    printf("Even");
}