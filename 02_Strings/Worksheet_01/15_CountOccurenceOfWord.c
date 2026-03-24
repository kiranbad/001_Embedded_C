/* Count occurrences of a word in a given string
Input: "hi hello hi hey hi", word: "hi"
Output: 3*/

#include<stdio.h>
#include<string.h>
void count_occurence_of_word(char *str,char *word)
{
    int i=0,j=0,count=0;
    for(i=0; str[i]!='0'; i++)
    {
        for(j=0; word[j]!='\0'; j++)
        {
            if(str[i+j]!=word[j])
            {
                break;
            }
        }
        if(word[j]=='\0')
        count++;
    }
    printf("%d",count);

}
int main()
{
    char str[30],word[10];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter the word: ");
    scanf("%s",word);
    count_occurence_of_word(str,word);

}