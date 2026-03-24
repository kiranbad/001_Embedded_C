/*Exercise 17: Struct Array with Dynamic Allocation
Goal: Allocate memory for array of structs.
Activity:
Define a struct (e.g., name and age).
Ask user how many entries to store.
Allocate memory using malloc.
Accept values and display them.
Free the memory.*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[10];
    int age;
};
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student *s1;
    s1 = malloc(n * sizeof(struct student));
    printf("Enter the name and age: ");
    for(int i=0; i<n; i++)
    {
        scanf("%s%d",s1[i].name,&s1[i].age);
    }

    for(int i=0; i<n; i++)
    {
        printf("%s\t%d\n",s1[i].name,s1[i].age);
    }

    free(s1);
}