/*12. Count total zeros and ones in a binary number
Question: Write a C program to count the total number of zeros and ones in the binary representation of a number.
Sample data: Input: 15 (binary 00001111)
Expected output: Number of ones: 4, Number of zeros: 4 (assuming 8-bit)*/
#include <stdio.h>
int main()
{
    int num,zero=0,ones=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 31; i >= 0; i--)
    {
        if (num & (1 << i))
            ones++;
        else
            zero++;
    }
    printf("Ones=%d\nZeros%d\n",ones,zero);
}