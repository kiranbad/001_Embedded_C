/* Program: Find first occurrence of a character in a given string
Input: "elephant", find 'e'
Output: Position: 0*/
#include<stdio.h>
#include<string.h>
int find_first_occurence(char *str,char ch)
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
}
int main()
{
    char str[30],ch;
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter the character : ");
    scanf(" %c",&ch);
    int pos=find_first_occurence(str,ch);
    printf("Position: %d",pos);

}