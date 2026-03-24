/*Trim both leading and trailing white space characters from given string
Input: " Hello World "
Output: "Hello World"*/
#include<stdio.h>
#include<string.h>
void trim_leading_trialing_spaces(char *str)
{
    int i=0,j=0;
    while(str[i]==' ')//remove leading
    {
        i++;
    }
    if(i>0)
    strcpy(str,str+i);//copy

    //remove trailing spaces
    int len=strlen(str);
    while(len>0 && str[len-1]==' ')
    {
        str[len-1]='\0';
        len--;
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    trim_leading_trialing_spaces(str);
    printf("%s",str);

}