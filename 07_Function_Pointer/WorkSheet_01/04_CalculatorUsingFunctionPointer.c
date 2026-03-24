/*4. Menu-driven Calculator Using Function Pointers
Implement mathematical operations (power, modulo, squareRoot) as separate functions.
Store these operation functions in a function pointer array.
Provide a user-interactive menu to select and execute the chosen operation on input values.*/
#include <stdio.h>
#include <math.h>

void power(int a, int b)
{
    int result = 1;
    for(int i = 0; i < b; i++)
        result *= a;

    printf("Result = %d\n", result);
}

void modulo(int a, int b)
{
    printf("Result = %d\n", a % b);
}

void squareroot(int a, int b)
{
    printf("Result = %d\n", a*a);
}

int main()
{
    int a, b, choice;

    void (*fptr[])(int, int) = {power, modulo, squareroot};

    printf("1.Power\n2.Modulo\n3.SquareRoot\n");
    printf("Enter option: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter number and power: ");
            scanf("%d%d",&a,&b);
            fptr[0](a,b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            fptr[1](a,b);
            break;

        case 3:
            printf("Enter number: ");
            scanf("%d",&a);
            fptr[2](a,0);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}