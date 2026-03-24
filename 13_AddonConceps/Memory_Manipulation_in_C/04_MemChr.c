/*Use memchr to find the first occurrence of character 'e' in the string "excellent".*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "excellent";
    char *p;

    p = memchr(str, 'e', strlen(str));

    if(p != NULL)
        printf("First occurrence of 'e' is at position: %ld\n", p - str);
    else
        printf("Character not found\n");

    return 0;
}