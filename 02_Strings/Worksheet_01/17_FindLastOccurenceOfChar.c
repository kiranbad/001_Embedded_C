/* Find last occurrence of a character in a string
        Input: "ababcabc", find 'b'
        Output: Position: 6*/

#include<stdio.h>
#include<string.h>
void find_last_occurrence(char *str,char ch)
{
    int len=strlen(str)-1;
    for(int i=len; str[i]>=0; i--)
    {
        if(str[i]==ch)
        {
            printf("Position: %d",i);
            break;
        }
    }
}

int main()
{
    char str[30],ch;
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter the char : ");
    scanf(" %c",&ch);
    find_last_occurrence(str,ch);

}