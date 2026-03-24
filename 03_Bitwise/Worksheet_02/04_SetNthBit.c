/*4. Set nth bit of a number
Question: Write a C program to set (make 1) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after setting bit 1: 10 (binary 1010) — no change
Input number: 8 (binary 1000), bit position: 0
Expected output: Number after setting bit 0: 9 (binary 1001)*/
#include <stdio.h>

void set_nth_bit(int num,int n)
{
    printf("%d",num|(1<<n));
}

int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the n value : ");
    scanf("%d",&n);
    set_nth_bit(num,n);
    return 0;
}