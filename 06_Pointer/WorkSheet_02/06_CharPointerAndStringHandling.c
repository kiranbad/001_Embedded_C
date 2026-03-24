/*6. Character Pointer and String Handling
Goal: Manipulate strings using character pointers and standard string library functions.
Activity:
1. Declare a character pointer and assign it to a string literal or dynamically allocated memory.
2. Use pointer arithmetic to traverse and modify the string.
3. Implement functions to concatenate, copy, or reverse strings using only pointers.
4. Understand how strings are stored and accessed in memory via pointers.*/
#include<stdio.h>
void string_cat(char *dest,char *src)
{
    while(*dest!='\0')
    dest++;
    while(*dest=*src)
    {
        dest++;
        src++;
    }
    *dest='\0';
}
void string_cpy(char *dest,char *src)
{
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
int main()
{
    char str[]="Kiran";
    *(str+2)='a';
    printf("%s\n",str);

    char dest[]="Hello",src[]="World";
    string_cat(dest,src);
    printf("After StringCat: %s\n",dest);

    char de[6],sr[]="kiran";
    string_cpy(de,sr);
    printf("After Copying : %s",de);;
}