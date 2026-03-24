/*9. Union Array
Declare an array of unions, each holding an 
int , a float , or a char .
Write a program to assign values of different types to each element and display them. Observe any issues.*/
#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data arr[3];

    arr[0].i = 10;
    arr[1].f = 5.5;
    arr[2].c = 'A';

    printf("Element 0 (int): %d\n", arr[0].i);
    printf("Element 1 (float): %f\n", arr[1].f);
    printf("Element 2 (char): %c\n", arr[2].c);

    // Assign new value to arr[0] as float to see overwrite behavior
    arr[0].f = 3.14;
    printf("Element 0 after assigning float: %f\n", arr[0].f);
    printf("Element 0 int now may be garbage: %d\n", arr[0].i);

    return 0;
}