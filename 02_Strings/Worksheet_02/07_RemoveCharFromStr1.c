/* Remove from the first string all characters that appear in the second string.
Input: str1 = "hello world", str2 = "low"
Output: "he rd"*/
#include<stdio.h>
#include<string.h>
void remove_char_from_str1(char *str1,char *str2)
{
    int remove[256]={0};
    int index=0;
    for(int i=0; str2[i]!='\0'; i++)
    {
        remove[str2[i]]=1;
    }

    for(int i=0; str1[i]!='\0'; i++)
    {
        if(remove[str1[i]]==0)
        {
            str1[index++]=str1[i];
        }
    }
    str1[index]='\0';
}
int main()
{
    char str1[30],str2[10];
    printf("Enter the String : ");
    scanf("%[^\n]",str1);
    printf("Enter the str2 : ");
    scanf("%s",str2);
    remove_char_from_str1(str1,str2);
    printf("%s",str1);
}