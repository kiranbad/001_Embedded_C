/*. Find the character that appears most frequently in the input string and print it.
Input: "sample string"
Output: 's'*/
#include<stdio.h>
#include<string.h>
void most_frequent_char(char *str)
{
    int freq[256]={0};
    int max=0;
    char result;
    for(int i=0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }

    for(int i=0; str[i]!='\0'; i++)
    {
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("Most frequent char is %c",result);
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    most_frequent_char(str);

}