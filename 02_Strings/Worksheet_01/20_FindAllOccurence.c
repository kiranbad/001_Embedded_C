/* Program: Find all occurrences of a word in given string
Input: "the sky is the limit in the sky", search "the"
Output: Found at positions: 0, 15, 30*/
#include<stdio.h>
#include<string.h>
void find_all_occurence_of_word(char *str,char *word)
{
    int i=0,j=0,count=0;
    int len=strlen(word);
    for(i=0; str[i]!='\0'; i++)
    {
        for(j=0; word[j]!='\0'; j++)
        {
            if(str[i+j]!=word[j])
            {
                break;
            }
        }
        if(j==len)
        printf("%d ",i);
    }
}
int main()
{
    char str[50],word[10];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter the word: ");
    scanf("%s",word);
    find_all_occurence_of_word(str,word);
}