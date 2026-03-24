/*Find first occurrence of a word in a given string
Input: "this is a test string", word: "test"
Output: Found at position 11*/

#include<stdio.h>
#include<string.h>
int find_first_occurrence(char *str,char *word)
{
    int i,j;
    for(i=0; str[i]!='\0'; i++)
    {
        for(j=0; word[j]!='\0'; j++)
        {
            if(str[i+j]!=word[j])
            break;
        }
        if(word[j]=='\0')
        return i;
    }
    return -1;
}
int main()
{
    char str[30];
    char word[10];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter the word : ");
    scanf("%s",word);
    int pos=find_first_occurrence(str,word);
    if(pos!=-1)
    printf("Found at position %d",pos);
}