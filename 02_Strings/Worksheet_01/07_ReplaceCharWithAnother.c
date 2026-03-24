/* Replace all occurrences of a character with another in a string
Input: "banana", replace 'a' with 'o'
Output: "bonono"*/
#include<stdio.h>
#include<string.h>
void replace_char(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a')
        str[i]='o';
        i++;
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    replace_char(str);
    printf("%s",str);
    
}