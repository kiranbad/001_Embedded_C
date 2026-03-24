/*1. Mathematical Operations with Function Pointers
Log Session four simple mathematical functions (add, subtract, multiply, divide) that accept two integer
arguments and return an integer.
Use a single function pointer to dynamically select and execute one of these operations based on user input.*/
#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int a, b, choice;
    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);

    int (*operation)(int, int);
    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        operation = add;
        break;
    case 2:
        operation = sub;
        break;
    case 3:
        operation = mul;
        break;
    case 4:
        operation = div;
        break;
    default:
        printf("Invalid choice\n");
        return 0;
    }
    int result=operation(a,b);
    printf("Result = %d\n",result);
    return 0;
}