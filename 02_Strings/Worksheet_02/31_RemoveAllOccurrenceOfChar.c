/*Remove all occurrences of character 'b' and substring "ac" from a string.
Input: "abacb"
Output: "a"*/
#include<stdio.h>
#include<string.h>
void remove_all_occurrence(char *str)
{
    int i=0,j=0;
    int len=strlen(str);
    while(i<len)
    {
        if(str[i]=='a' && str[i+1]=='c')
        {
            i+=2;
        }else if(str[i]=='b')
        {
            i++;
        }else{
            str[j++]=str[i++];
        }
    }
    str[j]='\0';
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    remove_all_occurrence(str);
    printf("%s",str);
}