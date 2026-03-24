/*4. Write a program to check bit status in an integer:
Check if LSB is set (1) or not (0)
Check if MSB is set (1) or not (0)
Check if the nth bit is set (1) or not (0) (user input*/
#include<stdio.h>
void is_lsb_set(int num)
{
    if(num&1)
    printf("Lsb is set\n");
    else
    printf("Lsb is Not set\n");
}

void is_msb_set(int num)
{
    // For 8-bit number, MSB mask is 128 (1 << 7)
    if(num & (1 << 7))
        printf("MSB of %d is set (1)\n", num);
    else
        printf("MSB of %d is not set (0)\n", num);
}
void is_nth_bit_set(int num,int n)
{
    if((num >> (n - 1)) & 1)
        printf("Bit %d is set (1)\n", n);
    else
        printf("Bit %d is not set (0)\n", n);
}
int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    is_lsb_set(num);
    is_msb_set(num);
    printf("Enter the n value : ");
    scanf("%d",&n);
    is_nth_bit_set(num,n);
}