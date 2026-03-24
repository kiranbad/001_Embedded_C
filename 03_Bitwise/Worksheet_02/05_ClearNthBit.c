/*5. Clear nth bit of a number
Question: Write a C program to clear (make 0) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 3
Expected output: Number after clearing bit 3: 2 (binary 0010)*/
#include <stdio.h>

void clear_nth_bit(int num,int n)
{
    printf("%d",num&~(1<<n));
}

int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the n value : ");
    scanf("%d",&n);
    clear_nth_bit(num,n);
    return 0;
}