/*6. Toggle nth bit of a number
Question: Write a C program to toggle (flip) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after toggling bit 1: 8 (binary 1000)*/
#include <stdio.h>

void toggle_nth_bit(int num,int n)
{
    printf("%d",num^(1<<n));
}

int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the n value : ");
    scanf("%d",&n);
    toggle_nth_bit(num,n);
    return 0;
}