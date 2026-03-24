/*10. Structure Declaration and Initialization
Goal
Understand the proper way to declare and initialize structures using multiple techniques and best practices.
Activity
Declare structure variables globally, locally, and statically.
Use designated initializers for clarity.
Use typedef to create aliases for complex structures.
Discuss structure initialization in embedded register mapping.
Tip: Static initialization is preferred for compile-time register definitions.*/
#include <stdio.h>

typedef struct
{
    int id;
    float marks;
} student;

student g = {1,80};

int main()
{
    student s1 = {2,85};

    static student s2 = {3,90};

    student s3 = {.id = 4, .marks = 95};

    printf("global: id=%d marks=%.1f\n", g.id, g.marks);

    printf("local: id=%d marks=%.1f\n", s1.id, s1.marks);

    printf("static: id=%d marks=%.1f\n", s2.id, s2.marks);

    printf("designated: id=%d marks=%.1f\n", s3.id, s3.marks);

    return 0;
}