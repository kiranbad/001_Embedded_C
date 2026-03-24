/*9. Count trailing zeros in a binary number
Question: Write a C program to count the number of trailing zeros in the binary representation of a number.
Sample data: Input: 40 (binary 101000)
Expected output: Number of trailing zeros: 3*/
#include<stdio.h>
void count_trailing_zeros(int num)
{
    int count=0;
    for(int i=0; i<32; i++)
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
    count_trailing_zeros(num);
    return 0;
}