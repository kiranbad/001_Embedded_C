/*Write a program that copies one string to another using memcpy*/
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello";
    char dest[20];

    memcpy(dest, src, strlen(src) + 1);  // copy string including '\0'

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}