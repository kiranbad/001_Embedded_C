/*Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given
integer:
Set the LSB to 1
Clear the LSB (set to 0)
Toggle the LSB

Set the MSB to 1
Clear the MSB (set to 0)
Toggle the MSB

Set a specific bit to 1
Clear a specific bit
Toggle a specific bit*/
#include <stdio.h>
void set_clear_toggle_nth(int num,int n)
{
    int set = num | (1<<n);     // Set LSB
    int clear = num & ~(1<<n);  // Clear LSB
    int toggle = num ^ (1<<n);  // Toggle LSB

    printf("Original num = %d\n", num);
    printf("After SET nth    = %d\n", set);
    printf("After CLEAR nth  = %d\n", clear);
    printf("After TOGGLE nth = %d\n", toggle);
}

void set_clear_toggle_msb(int num)
{
    unsigned int mask = 1U << 31;  // MSB mask

    unsigned int set = (unsigned int)num | mask;    // Set MSB
    unsigned int clear = (unsigned int)num & ~mask; // Clear MSB
    unsigned int toggle = (unsigned int)num ^ mask; // Toggle MSB

    printf("Original num = %d\n", num);
    printf("After SET MSB    = %u\n", set);
    printf("After CLEAR MSB  = %u\n", clear);
    printf("After TOGGLE MSB = %u\n", toggle);
}

void set_clear_toggle_lsb(int num)
{
    int set = num | 1;     // Set LSB
    int clear = num & ~1;  // Clear LSB
    int toggle = num ^ 1;  // Toggle LSB

    printf("Original num = %d\n", num);
    printf("After SET LSB    = %d\n", set);
    printf("After CLEAR LSB  = %d\n", clear);
    printf("After TOGGLE LSB = %d\n", toggle);
}

int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    set_clear_toggle_lsb(num);
    set_clear_toggle_msb(num);
    printf("Enter the n value : ");
    scanf("%d",&n);
    set_clear_toggle_nth(num,n);
    return 0;
}