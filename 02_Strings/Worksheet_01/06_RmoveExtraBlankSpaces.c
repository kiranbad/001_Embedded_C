/*Remove all extra blank spaces from a given string
Input: " This is ChatGPT "
Output: "This is ChatGPT"*/
#include<stdio.h>
#include<string.h>
void remove_extra_space(char *str)
{
    int i=0,j=0;
    while(str[i]==' ')
    i++;
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i+1]==' ')
        {
            i++;
            continue;
        }
        str[j]=str[i];
        i++;
        j++;
    }
    if(j>0 && str[j-1]==' ')
    j--;
    str[j]='\0';
}
int main()
{
    char str[30];
    printf("Enter the String :");
    scanf("%[^\n]",str);
    
    remove_extra_space(str);
    printf("%s",str);

}