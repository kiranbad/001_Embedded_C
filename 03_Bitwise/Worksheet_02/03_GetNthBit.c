/*3. Get nth bit of a number
Question: Write a C program to get the value of the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 2
Expected output: Bit 2 of 10 is 1*/
#include <stdio.h>

void get_nth_bit(int num,int n)
{
    int bit = (num >> (n - 1)) & 1;
    printf("Bit %d of %d is %d\n", n, num, bit);
}

int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the n value : ");
    scanf("%d",&n);
    get_nth_bit(num,n);
    return 0;
}