/*10. Use Case – Variant Data Storage
Design a simple employee record system using a structure with a union that can store either salary (
float ) or hourly wage
(
float ), depending on employee type.
Add code to input and print details for a list of employees.*/
#include <stdio.h>
#include <string.h>

#define MAX_EMP 5

struct Employee
{
    char name[30];
    char type; // 'S' for salaried, 'H' for hourly

    union
    {
        float salary;     // for salaried employee
        float hourly_wage; // for hourly employee
    };
};

void inputEmployee(struct Employee *e)
{
    printf("Enter employee name: ");
    scanf("%s", e->name);

    printf("Enter type (S for salaried, H for hourly): ");
    scanf(" %c", &e->type);

    if(e->type == 'S')
    {
        printf("Enter salary: ");
        scanf("%f", &e->salary);
    }
    else if(e->type == 'H')
    {
        printf("Enter hourly wage: ");
        scanf("%f", &e->hourly_wage);
    }
    else
    {
        printf("Invalid type. Defaulting to salaried.\n");
        e->type = 'S';
        e->salary = 0;
    }
}

void displayEmployee(struct Employee e)
{
    printf("\nName: %s\n", e.name);
    if(e.type == 'S')
        printf("Employee Type: Salaried\nSalary: %.2f\n", e.salary);
    else if(e.type == 'H')
        printf("Employee Type: Hourly\nHourly Wage: %.2f\n", e.hourly_wage);
    else
        printf("Invalid Type\n");
}

int main()
{
    struct Employee employees[MAX_EMP];
    int n, i;

    printf("Enter number of employees (max %d): ", MAX_EMP);
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d details:\n", i+1);
        inputEmployee(&employees[i]);
    }

    printf("\n--- Employee Records ---\n");
    for(i = 0; i < n; i++)
    {
        displayEmployee(employees[i]);
    }

    return 0;
}