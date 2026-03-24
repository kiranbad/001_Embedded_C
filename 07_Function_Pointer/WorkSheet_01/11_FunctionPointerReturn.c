/*11. Function Pointer as Return Value
Implement multiple arithmetic functions (add, subtract, multiply).
Worksheet1
Write a function getOperation(char *name) that takes a string (like "add" or "subtract") and returns a pointer to
the corresponding function.
Use this return value to perform the selected operation on user-provided numbers.*/
#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

/* Function returning a function pointer */
int (*getOperation(char *name))(int, int)
{
    if(strcmp(name, "add") == 0)
        return add;

    else if(strcmp(name, "subtract") == 0)
        return subtract;

    else if(strcmp(name, "multiply") == 0)
        return multiply;

    else
        return NULL;
}

int main()
{
    int a, b;
    char op[20];

    printf("Enter operation (add / subtract / multiply): ");
    scanf("%s", op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int (*operation)(int, int);

    operation = getOperation(op);

    if(operation != NULL)
    {
        int result = operation(a, b);
        printf("Result = %d\n", result);
    }
    else
    {
        printf("Invalid operation\n");
    }

    return 0;
}