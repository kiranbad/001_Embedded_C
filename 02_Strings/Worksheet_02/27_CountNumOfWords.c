/*Count the number of words in a string separated by spaces.
Input: "Hello world"
Output: 2*/
#include<stdio.h>
#include<string.h>
void count_num_of_words(char *str)
{
    int wordcount=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=' ' && (i==0 || str[i-1]==' '))
        {
            wordcount++;
        }
    }
    printf("%d",wordcount);
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    count_num_of_words(str);
}