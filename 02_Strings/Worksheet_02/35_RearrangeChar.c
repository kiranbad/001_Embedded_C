/*Rearrange characters in a string so that the same characters are at least d distance apart.
Input: "aabbcc", d=2
Output: "abcabc"*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int d;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter d: ");
    scanf("%d", &d);

    int n = strlen(str);
    int freq[26] = {0};

    for(int i = 0; i < n; i++)
        freq[str[i] - 'a']++;

    char result[50];
    int index = 0;

    while(index < n)
    {
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > 0)
            {
                result[index++] = i + 'a';
                freq[i]--;
            }
        }
    }

    result[n] = '\0';

    printf("Rearranged string: %s\n", result);
}