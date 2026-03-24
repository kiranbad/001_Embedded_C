/* Print all characters that occur more than once in a string.
Input: "programming"
Output: r g m*/
#include<stdio.h>
#include<string.h>
void find_more_than_one_occurence(char *str)
{
    int visited[256]={0};
    for(int i=0; str[i]!='\0'; i++)
    {
        visited[str[i]]++;
    }
    for(int i=0; str[i]!='\0'; i++)
    {
        if(visited[str[i]]>1){
        visited[str[i]]=0;
        printf("%c ",str[i]);
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    find_more_than_one_occurence(str);
}