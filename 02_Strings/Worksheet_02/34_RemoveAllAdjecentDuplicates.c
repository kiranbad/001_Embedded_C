/* Recursively remove all adjacent duplicate characters from a string until no duplicates remain.
Input: "azxxzy"
Output: "ay" */
#include<stdio.h>
#include<string.h>
void remove_adjacent(char *str)
{
    int i,j;
    for(i=0;str[i]!='\0';)
    {
        if(str[i]==str[i+1])
        {
            char ch =str[i];

            while(str[i]==ch)
            i++;

            for(j=i; str[j]!='\0'; j++)
            {
                str[j-(i-1)]=str[j];
            }

            str[j-(i-1)]='\0';
            i=0;
        }else
        i++;
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);

    remove_adjacent(str);
    printf("%s",str);
    
}