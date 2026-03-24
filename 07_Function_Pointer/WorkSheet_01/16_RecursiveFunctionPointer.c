/*16. Recursive Function Pointer
Implement a recursive function (such as factorial or fibonacci) using a function pointer variable instead of
directly calling the function by name.
Show that the recursion works correctly using only the pointer.*/
#include <stdio.h>

int factorial(int n);

/* Function pointer declaration */
int (*fptr)(int);

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fptr(n - 1);   // recursive call using pointer
}

int main()
{
    int num;

    /* Assign function address to pointer */
    fptr = factorial;

    printf("Enter a number: ");
    scanf("%d",&num);

    int result = fptr(num);   // call using pointer

    printf("Factorial of %d = %d\n", num, result);
}