/*1. Check Least Significant Bit (LSB) of a number is set or not
Question: Write a C program to check if the Least Significant Bit (LSB) of a number is set (1) or not.
Sample data: Input: 5 (binary 0101)
Expected output: LSB of 5 is set (1)*/
#include<stdio.h>
void is_lsb_set(int num)
{
    if(num&1)
    printf("set");
    else
    printf("Not set");
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    is_lsb_set(num);
}