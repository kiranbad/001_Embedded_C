/* Find the length of the longest substring with no repeating characters.
Input: "abcabcbb"
Output: 3*/
#include<stdio.h>
#include<string.h>

int longest_unique_substring(char *str)
{
    int visited[256] = {0};
    int start = 0, max = 0;

    for(int end = 0; str[end] != '\0'; end++)
    {
        visited[str[end]]++;

        while(visited[str[end]] > 1)
        {
            visited[str[start]]--;
            start++;
        }

        int len = end - start + 1;

        if(len > max)
            max = len;
    }

    return max;
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%s",str);

    printf("Longest substring length: %d", longest_unique_substring(str));
}