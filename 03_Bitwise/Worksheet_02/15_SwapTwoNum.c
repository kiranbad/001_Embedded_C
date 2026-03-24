/*15. Swap two numbers using bitwise operator
Question: Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
Sample data: Input: a=5, b=9
Expected output: After swapping: a=9, b=5*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the number 1 and 2 : ");
    scanf("%d%d",&num1,&num2);

    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("Num1=%d\nNum2=%d",num1,num2);
    
}