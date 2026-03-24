/*Remove all duplicate characters from a string, keeping only the first occurrence of each character.
Input: "programming"
Output: "progamin"*/
#include<stdio.h>
#include<string.h>
void remove_duplicate_char(char *str)
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
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    remove_duplicate_char(str);
    printf("%s",str);
}