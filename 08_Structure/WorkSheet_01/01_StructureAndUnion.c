/*1. Structure vs Union in Embedded Systems
Goal
Understand how structures and unions differ in terms of memory layout, access, and use in embedded systems, particularly in data
interpretation and memory saving.
Activity
Define a structure and a union with three different data types (e.g., char, int, float).
Print the size of each and compare.
Write values to each member and observe the behavior.
Map the union onto a byte buffer and visualize how different types share memory.
Document a scenario where only one data type is valid at a time (e.g., packet command structure).
Tip: Use sizeof() and printf() to track memory usage and value overlap*/
#include <stdio.h>
struct Data
{
    char c;
    int i;
    float f;
};
union DataUnion
{
    char c;
    int i;
    float f;
};

int main()
{
    struct Data s;
    union DataUnion u;

    printf("Size of Structure: %lu\n", sizeof(s));
    printf("Size of Union: %lu\n", sizeof(u));
    s.c = 'A';
    s.i = 10;
    s.f = 3.14;

    printf("\nStructure values:\n");
    printf("c = %c\n", s.c);
    printf("i = %d\n", s.i);
    printf("f = %f\n", s.f);
    u.c = 'A';
    printf("\nUnion after assigning char:\n");
    printf("c = %c\n", u.c);

    u.i = 10;
    printf("\nUnion after assigning int:\n");
    printf("i = %d\n", u.i);
    printf("c = %c (overwritten)\n", u.c);

    u.f = 3.14;
    printf("\nUnion after assigning float:\n");
    printf("f = %f\n", u.f);
    printf("i = %d (overwritten)\n", u.i);
}