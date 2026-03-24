/* Given a list of strings and a word, print the strings containing all characters of that word.
Input: Word = "act", List = ["cat", "tac", "act", "dog"]
Output: "cat", "tac", "act"*/
#include<stdio.h>
#include<string.h>
int contains_all(char *str,char *word)
{
    for(int i=0; word[i]!='\0'; i++)
    {
        if(strchr(str,word[i])==NULL)
        return 0;
    }
    return 1;
}
int main()
{
    char *list[]={"cat","tac","act","dog"};
    char word[]="act";
    int n=sizeof(list)/sizeof(list[0]);

    for(int i=0; i<n; i++)
    {
        if(contains_all(list[i],word))
        {
            printf("%s\n",list[i]);
        }
    }

}