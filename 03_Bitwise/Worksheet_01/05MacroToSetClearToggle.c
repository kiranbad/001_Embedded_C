/* Write macros to set, clear, and toggle the nth bit using bitwise operators.*/
#include<stdio.h>
#define SET(num,n) num|(1<<n)
#define CLEAR(num,n) num&~(1<<n)
#define TOGGLE(num,n) num^(1<<n)

int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the n value: ");
    scanf("%d",&n);

    printf("Afer set nth bit : %d\n",SET(num,n));
    printf("Afer clear nth bit : %d\n",CLEAR(num,n));
    printf("Afer toggle nth bit : %d\n",TOGGLE(num,n));
}