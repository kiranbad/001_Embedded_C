/*29. Store employee details in a file and update them as needed.
Input: Add new employee: Name: John, Age: 25
Output: Employee added (info saved in file)*/
#include <stdio.h>

struct Employee {
    char name[50];
    int age;
};

int main() {
    FILE *fptr;
    struct Employee emp;

    // Get employee details from user
    printf("Enter employee name: ");
    scanf(" %[^\n]s", emp.name);  // read full line including spaces
    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    // Open file in append mode to add new employee
    fptr = fopen("employees.txt", "a");
    if (!fptr) {
        perror("File");
        return 1;
    }

    // Write employee details to file
    fprintf(fptr, "Name: %s, Age: %d\n", emp.name, emp.age);

    fclose(fptr);
    printf("Employee added successfully!\n");

    return 0;
}