/*14. Chained Function Pointer Calls
Write several functions that transform an integer (e.g., doubleValue, increment, square).
Log Session an array of function pointers representing a pipeline of operations.
Pass a number through the pipeline by applying each function in sequence, using the array of pointers.*/
#include <stdio.h>

int doubleValue(int x)
{
    return x * 2;
}

int increment(int x)
{
    return x + 1;
}

int square(int x)
{
    return x * x;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    int (*pipeline[])(int) = {doubleValue, increment, square};

    int size = sizeof(pipeline)/sizeof(pipeline[0]);

    for(int i=0;i<size;i++)
    {
        num = pipeline[i](num);
    }

    printf("Final result after pipeline operations: %d\n", num);

    return 0;
}