/* Convert a numeric string to an integer without using built-in functions.
Input: "1234"
Output: 1234*/
#include<stdio.h>
#include<string.h>
int string_to_integer(char *str)
{
    int num=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num=num*10+(str[i]-'0');
        }
        else
        {
            return -1;
        }
    }
    return num;
}
int main()
{
    char str[30];
    printf("Enter the Numeric String : ");
    scanf("%[^\n]",str);
    string_to_integer(str);
    int num=string_to_integer(str);
    if(num!=-1)
    {
        printf("%d",num);
    }


}