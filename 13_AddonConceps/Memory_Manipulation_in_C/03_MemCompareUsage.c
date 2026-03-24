/*Write a code snippet to check if two character arrays are equal using memcmp*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "hello";
    char b[] = "hello";

    if (memcmp(a, b, strlen(a)) == 0)
    {
        printf("Arrays are equal\n");
    }
    else
    {
        printf("Arrays are not equal\n");
    }

    return 0;
}