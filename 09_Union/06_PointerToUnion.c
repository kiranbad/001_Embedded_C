/*6. Pointer to a Union
Write a program that defines a union called 
Sample with an 
int and a 
float .
Declare a pointer to the union. Assign values using the pointer and print the results.*/
#include <stdio.h>

union Sample
{
    int i;
    float f;
};

int main()
{
    union Sample s;
    union Sample *ptr;   // pointer to union

    ptr = &s;            // pointer pointing to union variable

    // Assign value using pointer
    ptr->i = 25;
    printf("Integer value: %d\n", ptr->i);

    // Assign another value using pointer
    ptr->f = 10.75;
    printf("Float value: %f\n", ptr->f);

    return 0;
}