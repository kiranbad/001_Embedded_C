/*Reverse a string without using library functions
Input: "OpenAI"
Output: "IAnepO"*/
#include<stdio.h>
int stringlen(char *str,int count)
{
    int i=0;
    while(str[i]!='\0')  
    {
        count++;
        i++;
    }
    return count;
}
void reverse_string(char *str,int start, int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[50];
    int count=0;
    printf("Enter the String: ");
    scanf("%[^\n]", str);
    int len = stringlen(str,count);
    reverse_string(str,0,len-1);
    printf("%s",str);
}