/*10. Count leading zeros in a binary number
Question: Write a C program to count the number of leading zeros in the binary representation of a number (assuming 32-bit integer).
Sample data: Input: 16 (binary 00000000000000000000000000010000)
Expected output: Number of leading zeros: 27*/
#include<stdio.h>
void count_leadling_zeros(int num)
{
    int count=0;
    for(int i=31; i>=0; i--)
    {
        if(((num>>i)&1)==0)
        count++;
        else
        break;
    }
    printf("Number of trailing zeros: %d",count);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    count_leadling_zeros(num);
    return 0;
}