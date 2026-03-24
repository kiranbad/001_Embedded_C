/*5. Anonymous Union
Declare an anonymous union inside a structure.
Initialize and access its members without using a union name.
Demonstrate how this simplifies access in code.*/
#include <stdio.h>

struct Data
{
    int type;

    union   // Anonymous union (no name)
    {
        int i;
        float f;
        char c;
    };
};

int main()
{
    struct Data d;

    d.type = 1;
    d.i = 100;   // Access directly without union name
    printf("Integer value: %d\n", d.i);

    d.f = 5.75;  // Overwrites previous value
    printf("Float value: %f\n", d.f);

    d.c = 'A';   // Overwrites float
    printf("Char value: %c\n", d.c);

    return 0;
}