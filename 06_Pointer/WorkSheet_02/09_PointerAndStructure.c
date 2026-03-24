/*9. Pointer and Structures
Goal: Use pointers to access and modify structure members efficiently, including passing structures to functions.
Activity:
1. Define a structure and create a pointer to it.
2. Use the pointer to read and modify structure members.
3. Pass structure pointers to functions that update structure data.
4. Dynamically allocate memory for structures and handle them via pointers*/
#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollno;
    int age;
};
void update_struct_data(struct student *s1)
{
    s1->age=30;
    s1->rollno=101;
}
int main()
{
    struct student *s1;
    s1=malloc(sizeof(struct student));
    s1->age=25;
    s1->rollno=100;
    update_struct_data(s1);
    printf("%d\n",s1->age);
    printf("%d\n",s1->rollno);
    free(s1);
    
}