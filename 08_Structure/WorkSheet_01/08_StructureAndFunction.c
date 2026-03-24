/*8. Structures and Functions
Goal
Learn how to pass structures to and return structures from functions and understand the trade-offs between pass-by-value and pass
by-reference.
Activity
Write a function that takes a structure as a value argument and modifies it.
Write a function that takes a pointer to structure and modifies it.
Return a structure from a function and print its values.
Measure memory usage and performance difference between pass-by-value and reference.*/
#include <stdio.h>

struct student
{
    int id;
    float marks;
};

void modify_value(struct student s)
{
    s.id = 2;
    s.marks = 90;
    printf("inside modify_value: id=%d marks=%.1f\n",s.id,s.marks);
}

void modify_reference(struct student *s)
{
    s->id = 3;
    s->marks = 95;
}

struct student create_student()
{
    struct student s;
    s.id = 4;
    s.marks = 88;
    return s;
}

int main()
{
    struct student s1 = {1,80};

    modify_value(s1);
    printf("after modify_value: id=%d marks=%.1f\n",s1.id,s1.marks);

    modify_reference(&s1);
    printf("after modify_reference: id=%d marks=%.1f\n",s1.id,s1.marks);

    struct student s2 = create_student();
    printf("returned structure: id=%d marks=%.1f\n",s2.id,s2.marks);

    return 0;
}