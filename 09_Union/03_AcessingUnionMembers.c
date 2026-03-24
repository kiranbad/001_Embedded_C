/*3. Accessing Union Members
Using the union from exercise 1, assign values to more than one member at a time and print all members.
Observe which value is retained and explain why.*/
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

    data.i = 100;
    data.f = 25.5;
    strcpy(data.str, "Hello");

    printf("Integer value: %d\n", data.i);
    printf("Float value: %f\n", data.f);
    printf("String value: %s\n", data.str);

    return 0;
}