/*2. Check Most Significant Bit (MSB) of a number is set or not
Question: Write a C program to check if the Most Significant Bit (MSB) of a number is set (1) or not.
Sample data: Input: 128 (binary 10000000 for 8-bit number)
Expected output: MSB of 128 is set (1)*/
#include <stdio.h>

void is_msb_set(int num)
{
    // For 8-bit number, MSB mask is 128 (1 << 7)
    if(num & (1 << 7))
        printf("MSB of %d is set (1)\n", num);
    else
        printf("MSB of %d is not set (0)\n", num);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    is_msb_set(num);
    return 0;
}