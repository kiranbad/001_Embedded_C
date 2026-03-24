/*Compress a string using run-length encoding by replacing repeated characters with the character and count.
Input: "aaabbcc"
Output: "a3b2c2"*/
#include<stdio.h>
#include<string.h>
void compress_string(char *str)
{
    int count=1;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d",str[i],count);
            count=1;
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);   
    compress_string(str);
}