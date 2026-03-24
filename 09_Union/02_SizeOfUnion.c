/*2. Size of Union
Write a program to declare a union containing an 
int , a 
Print the size of this union using 
double , and a 
char .
sizeof . Compare the result with the size of a structure having the same members.*/
#include <stdio.h>

union Data
{
    int i;
    double d;
    char c;
};

struct DataStruct
{
    int i;
    double d;
    char c;
};

int main()
{
    union Data u;
    struct DataStruct s;

    printf("Size of union: %lu bytes\n", sizeof(u));
    printf("Size of structure: %lu bytes\n", sizeof(s));

    return 0;
}