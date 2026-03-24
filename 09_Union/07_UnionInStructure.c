/*7. Unions in Structures
Log Session a structure 
Student with a union inside it that can hold either an 
float and a 
char .
int roll_number or a 
Add a member 
char type to indicate which member is active.
Write functions to initialize and display the data for both types of students.*/
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_number;
    char type;
    union
    {
        float marks;
        char grade;
    };
};

void initStudentWithMarks(struct Student *s, int roll, float marks)
{
    s->roll_number = roll;
    s->type = 'F';
    s->marks = marks;
}

void initStudentWithGrade(struct Student *s, int roll, char grade)
{
    s->roll_number = roll;
    s->type = 'C';
    s->grade = grade;
}

void displayStudent(struct Student s)
{
    printf("Roll Number: %d\n", s.roll_number);
    if(s.type == 'F')
        printf("Marks: %.2f\n", s.marks);
    else if(s.type == 'C')
        printf("Grade: %c\n", s.grade);
    else
        printf("Invalid type\n");
    printf("-------------------\n");
}

int main()
{
    struct Student s1, s2;

    initStudentWithMarks(&s1, 101, 87.5);
    initStudentWithGrade(&s2, 102, 'A');

    displayStudent(s1);
    displayStudent(s2);

    return 0;
}