/* Reverse the order of words in a sentence without reversing the words themselves.
Input: "Hello world"
Output: "world Hello"*/
#include<stdio.h>
#include<string.h>
void reverse_order_of_word(char *str)
{
    int len=strlen(str);
    for(int i=len-1; i>=0; i--)
    {
        if(i==0 || str[i-1]==' ')
        {
            int j=i;
            while(str[j]!=' ' && str[j]!='\0')
            {
                printf("%c",str[j]);
                j++;
            }
            printf(" ");
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    reverse_order_of_word(str);
}