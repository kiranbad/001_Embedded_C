/*1. Union Declaration and Initialization
Declare a union named 
Data with an 
int , a 
float , and a 
char array of size 20.
Write a program to initialize and print each member, one after the other. Observe and explain the output.*/
#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    // Assign integer
    data.i = 10;
    printf("Integer value: %d\n", data.i);

    // Assign float
    data.f = 5.25;
    printf("Float value: %f\n", data.f);

    // Assign string
    strcpy(data.str, "Embedded");
    printf("String value: %s\n", data.str);

    return 0;
}