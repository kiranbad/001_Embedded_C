/*6. Write a C program to count the number of set bits in an unsigned integer.*/
#include<stdio.h>
int main()
{
    int count=0;
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=0; i<32; i++)
    {
        if((num>>i)&1)
        count++;
    }
    printf("%d",count);
}