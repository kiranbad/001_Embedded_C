/* Check whether a string is palindrome or not
Input: "madam"
Output: "Palindrome*/
#include<stdio.h>
#include<string.h>
int check_palindrome(char *str)
{
    int start=0;
    int end=strlen(str)-1;
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
    printf("Palindrome!\n");
    else
    printf("Not Palindrome\n");

}