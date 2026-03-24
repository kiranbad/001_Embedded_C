/*10. Math Function Framework
Write wrapper functions around standard mathematical functions (sin, cos, tan, log) with the same function
prototype.
Store pointers to these functions in an array.
Provide an interface for users to select and execute a math function on a given floating-point input.*/
#include <stdio.h>
#include <math.h>

double sinFunc(double x)
{
    return sin(x);
}

double cosFunc(double x)
{
    return cos(x);
}

double tanFunc(double x)
{
    return tan(x);
}

double logFunc(double x)
{
    return log(x);
}

int main()
{
    double (*mathFunc[])(double) = {sinFunc, cosFunc, tanFunc, logFunc};

    int choice;
    double num, result;

    printf("1. sin(x)\n");
    printf("2. cos(x)\n");
    printf("3. tan(x)\n");
    printf("4. log(x)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%lf", &num);

    if(choice >= 1 && choice <= 4)
    {
        result = mathFunc[choice - 1](num);
        printf("Result = %lf\n", result);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}