/*13. Rotate bits of a given number
Question: Write a C program to rotate bits of a number to the left or right by a given number of positions.
Sample data: Input: number=16 (binary 00010000), rotate left by 2
Expected output: Result after rotation: 64 (binary 01000000)*/

#include<stdio.h>
int rotate(int num,int n)
{
    num=num<<n;
    printf("%d",num);
}
int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter n value : ");
    scanf("%d",&n);
    rotate(num,n);
}