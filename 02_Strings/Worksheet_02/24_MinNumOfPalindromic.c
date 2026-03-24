/* Partition a string into the minimum number of palindromic substrings (Palindrome Partitioning).
Input: "ababbbabbababa"
Output: 3*/
#include<stdio.h>
#include<string.h>
#include<limits.h>

int isPalindrome(char *str, int start, int end)
{
    while(start < end)
    {
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int minPartition(char *str, int start, int end)
{
    if(start >= end || isPalindrome(str,start,end))
        return 0;

    int min = INT_MAX;

    for(int k = start; k < end; k++)
    {
        int left = minPartition(str,start,k);
        int right = minPartition(str,k+1,end);

        int cuts = left + right + 1;

        if(cuts < min)
            min = cuts;
    }

    return min;
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%s",str);

    int n = strlen(str);

    printf("Minimum cuts: %d",minPartition(str,0,n-1));
}