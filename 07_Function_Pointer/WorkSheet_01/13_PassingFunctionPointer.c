/*13. Passing Function Pointers to Standard Algorithms
Define a structure representing a record (e.g., struct Person { char name[30]; int age; }).
Implement multiple comparison functions for sorting (e.g., by name, by age).
Use the C standard library function qsort, passing these comparison functions as function pointers to sort an array
of records in different ways.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char name[30];
    int age;
};

int compareByName(const void *a, const void *b)
{
    struct Person *p1 = (struct Person *)a;
    struct Person *p2 = (struct Person *)b;

    return strcmp(p1->name, p2->name);
}

int compareByAge(const void *a, const void *b)
{
    struct Person *p1 = (struct Person *)a;
    struct Person *p2 = (struct Person *)b;

    return p1->age - p2->age;
}

void printPeople(struct Person arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",arr[i].name,arr[i].age);
    }
}

int main()
{
    struct Person people[] =
    {
        {"Kiran",22},
        {"Anita",25},
        {"Ravi",20},
        {"Suresh",30}
    };

    int n = sizeof(people)/sizeof(people[0]);
    int choice;

    printf("1.Sort by Name\n");
    printf("2.Sort by Age\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            qsort(people,n,sizeof(struct Person),compareByName);
            printf("\nSorted by Name:\n");
            break;

        case 2:
            qsort(people,n,sizeof(struct Person),compareByAge);
            printf("\nSorted by Age:\n");
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    printPeople(people,n);

    return 0;
}
