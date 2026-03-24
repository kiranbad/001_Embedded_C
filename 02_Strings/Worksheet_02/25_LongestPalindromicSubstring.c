/*Find the longest palindromic substring inside a given string.
Input: "babad"
Output: "bab" or "aba"*/
#include <stdio.h>
#include <string.h>

void longestPalindrome(char *str)
{
    int start = 0, maxLen = 1;
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        // Odd length palindrome
        int left = i;
        int right = i;

        while(left >= 0 && right < len && str[left] == str[right])
        {
            if(right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while(left >= 0 && right < len && str[left] == str[right])
        {
            if(right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");
    for(int i = start; i < start + maxLen; i++)
        printf("%c", str[i]);

    printf("\nLength: %d\n", maxLen);
}

int main()
{
    char str[] = "babad";
    longestPalindrome(str);
}