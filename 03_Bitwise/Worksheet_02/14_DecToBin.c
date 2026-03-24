/*14. Convert decimal to binary using bitwise operator
Question: Write a C program to convert a decimal number to binary representation using bitwise operators.
Sample data: Input: 13
Expected output: Binary representation: 1101*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 31; i >= 0; i--)
    {
        if (num & (1 << i))
            printf("1 ");
        else
            printf("0 ");
    }
}