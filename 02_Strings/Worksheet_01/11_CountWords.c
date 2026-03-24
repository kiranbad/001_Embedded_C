/* Program: Count total number of words in a string
Input: "C programming is fun"
Output: 4*/
#include<stdio.h>
#include<string.h>
void count_words(char *str)
{
    int wordcount=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=' ' && (i==0||str[i-1]==' '))
        wordcount++;
    }
    printf("%d",wordcount);
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    count_words(str);
}