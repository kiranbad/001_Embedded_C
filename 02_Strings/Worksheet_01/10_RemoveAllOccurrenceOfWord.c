/*Remove all occurrence of a word in given string
Input: "hello world hello universe", remove: "hello"
Output: "world universe"*/

#include<stdio.h>
#include<string.h>
void shift(char *str,int start,int len)
{
    int i=0;
    for(i=start; str[i+len]!='\0'; i++)
    {
        str[i]=str[i+len];
    }
    str[i]='\0';
}
void remove_all_occurrence_of_word(char *str,char *rem)
{
    int i,j;
    int len=strlen(rem);
    for(i=0; str[i]!='\0'; i++)
    {
        for(j=0; rem[j]!='\0'; j++)
        {
            if(str[i+j]!=rem[j])
            break;
        }
        if(j==len){
        shift(str,i,len);
        i--;
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    char rem[10];
    printf("Enter a String want to remove: ");
    scanf("%s",rem);
    remove_all_occurrence_of_word(str,rem);
    printf("%s",str);
}