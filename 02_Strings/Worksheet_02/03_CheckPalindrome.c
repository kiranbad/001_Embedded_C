/*Check whether a given string is a palindrome, i.e., it reads the same forwards and backwards.
Input: "madam"
Output: Palindrome*/
#include<stdio.h>
#include<string.h>
int check_palindrome(char *str)
{
    int start=0,end=strlen(str)-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    if(check_palindrome(str))
    printf("Palindrome.");
    else
    printf("Not Palindrome.");

}