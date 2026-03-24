/* Program: Remove last occurrence of a character from string
Input: "mississippi", remove 's'
Output: "missispippi*/
#include<stdio.h>
#include<string.h>
void remove_last_occurence_of_char(char *str,char ch)
{
    int len=strlen(str)-1;
    for(int i=len; i>=0; i--)
    {
        if(str[i]==ch)
        {
            for(int j=i;str[j]!='\0'; j++)
            {
                str[j]=str[j+1];
            }
            return;
        }
    }
}
int main()
{
    char str[30],ch;
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter the char: ");
    scanf(" %c",&ch);
    remove_last_occurence_of_char(str,ch);
    printf("%s",str);
}