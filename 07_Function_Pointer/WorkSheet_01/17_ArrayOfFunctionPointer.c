/*17. Array of Function Pointers in a Structure
Define a structure (e.g., Calculator) that contains an array of function pointers for operations (add, subtract,
multiply).
Instantiate the structure and use it to call the various operations on input values, demonstrating how the structure
can perform different calculations.*/
#include <stdio.h>

/* Arithmetic functions */
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

/* Structure with function pointer array */
struct Calculator
{
    int (*operations[3])(int, int);
};

int main()
{
    struct Calculator calc;
    int a, b, choice, result;

    /* Assign functions */
    calc.operations[0] = add;
    calc.operations[1] = subtract;
    calc.operations[2] = multiply;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = calc.operations[0](a, b);
            printf("Result = %d\n", result);
            break;

        case 2:
            result = calc.operations[1](a, b);
            printf("Result = %d\n", result);
            break;

        case 3:
            result = calc.operations[2](a, b);
            printf("Result = %d\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}