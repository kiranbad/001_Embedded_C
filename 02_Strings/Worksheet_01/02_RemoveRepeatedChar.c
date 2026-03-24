/*Program: Remove all repeated characters from a given string
Input: "programming"
Output: "progamin"*/
#include<stdio.h>
int remove_repeated_char(char *str)
{
    int visited[256]={0};
    int index=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(visited[str[i]]==0)
        {
            visited[str[i]]=1;
            str[index++]=str[i];
        }
    }
    str[index]='\0';
    
}
int main()
{
    char str[30];
    printf("Enter the String: ");
    scanf("%[^\n]",str);
    remove_repeated_char(str);
    printf("%s",str);
}