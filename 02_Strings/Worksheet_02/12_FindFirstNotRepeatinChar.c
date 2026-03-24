/* Find the first non-repeating character in a string and print it.
Input: "swiss"
Output: 'w'*/
#include<stdio.h>
#include<string.h>
void find_first_non_repeating_char(char *str)
{
    int visited[256]={0};

    for(int i=0; str[i]!='\0'; i++)
    {
        visited[str[i]]++;
    }

    for(int i=0; str[i]!='\0'; i++)
    {
        if(visited[str[i]]==1)
        {
            printf("%c",str[i]);
            return;
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    find_first_non_repeating_char(str);
}