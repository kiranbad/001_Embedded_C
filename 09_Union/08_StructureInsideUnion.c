/*8. Structure Inside a Union
Define a union that contains a structure (for example, 
struct { int x, y; } ) and an 
Write a program to set and access the structure members through the union.*/
#include <stdio.h>

union Data
{
    struct
    {
        int x;
        int y;
    } point;
    int value;
};

int main()
{
    union Data d;

    d.point.x = 10;
    d.point.y = 20;

    printf("Structure members: x = %d, y = %d\n", d.point.x, d.point.y);

    d.value = 100;
    printf("Union int value: %d\n", d.value);

    printf("After assigning int, structure members may be overwritten: x = %d, y = %d\n", d.point.x, d.point.y);

    return 0;
}