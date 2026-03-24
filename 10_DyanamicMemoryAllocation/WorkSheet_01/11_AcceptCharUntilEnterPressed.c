/*Exercise 11: Accept Characters Until Enter Pressed
Goal: Dynamically grow a string buffer with realloc.
Activity:
Start with a small buffer.
Accept characters one by one.
Reallocate buffer each time a new character is added.
Stop on newline character.
Null-terminate and print the string.
Free the memory.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str=NULL;
    int size=0;
    char ch;

    while((ch=getchar())!='\n')
    {
        str=realloc(str,size+1);
        if(str==NULL)
        {
            printf("Memory Allocation failed.\n");
        }
        str[size++]=ch;
    }
    str=realloc(str,size+1);
    str[size]='\0';

    printf("%s\n",str);
}