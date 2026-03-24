/*11. Flip bits of a binary number using bitwise operator
Question: Write a C program to flip all bits of a number using bitwise operators.
Sample data: Input: 5 (binary 00000101)
Expected output: Flipped bits: 250 (binary 11111010) (assuming 8-bit)*/

#include<stdio.h>
int main()
{
    unsigned char num;
    printf("Enter the number : ");
    scanf("%hhu",&num);

    num=~num;
    printf("%u",num);
}