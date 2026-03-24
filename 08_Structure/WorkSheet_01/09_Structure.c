/*9. Introduction to Structures in C
Goal
Grasp the basic concept of structures in C, including their need, syntax, and difference from arrays and unions.
Activity
Define a simple structure with multiple data types.
Compare it with an array and a union with similar members.
Initialize the structure in different ways and print values.
Analyze why structures are preferred in peripheral register grouping.
Tip: Structures allow logically grouping different data types under one name.*/
#include <stdio.h>

struct student
{
    int id;
    float marks;
    char grade;
};

union data
{
    int id;
    float marks;
    char grade;
};

int main()
{
    struct student s1 = {1,85.5,'A'};
    struct student s2;

    s2.id = 2;
    s2.marks = 90.5;
    s2.grade = 'B';

    int arr[3] = {1,2,3};

    union data u;

    printf("structure s1: %d %.1f %c\n",s1.id,s1.marks,s1.grade);
    printf("structure s2: %d %.1f %c\n",s2.id,s2.marks,s2.grade);

    printf("array elements: ");
    for(int i=0;i<3;i++)
        printf("%d ",arr[i]);

    printf("\n");

    u.id = 10;
    printf("union id=%d\n",u.id);

    u.marks = 75.5;
    printf("union marks=%.1f\n",u.marks);

    printf("size of structure=%lu\n",sizeof(s1));
    printf("size of union=%lu\n",sizeof(u));

    return 0;
}