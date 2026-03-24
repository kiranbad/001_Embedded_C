/* Program: Toggle case of each character of a string
Input: "HeLLo"
Output: "hEllO"*/

#include<stdio.h>
#include<string.h>
void toggle_each_case(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A'  && str[i]<='Z')
        {
            str[i]=str[i]+32;
            i++;
        }else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
            i++;
        }   
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    toggle_each_case(str);
    printf("%s",str);
}