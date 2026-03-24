/*Group a list of words so that anagrams are together.
Input: ["cat", "tac", "act", "dog"]
Output: ["cat", "tac", "act"], ["dog"]*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortWord(char *word)
{
    int len = strlen(word);
    for(int i = 0; i < len-1; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(word[i] > word[j])
            {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}

int main()
{
    char words[][10] = {"cat","tac","act","dog"};
    int n = 4;

    char sorted[n][10];

    for(int i=0;i<n;i++)
    {
        strcpy(sorted[i], words[i]);
        sortWord(sorted[i]);
    }

    int visited[n];
    for(int i=0;i<n;i++)
        visited[i] = 0;

    for(int i=0;i<n;i++)
    {
        if(visited[i])
            continue;

        printf("[ %s ", words[i]);
        visited[i] = 1;

        for(int j=i+1;j<n;j++)
        {
            if(strcmp(sorted[i], sorted[j]) == 0)
            {
                printf("%s ", words[j]);
                visited[j] = 1;
            }
        }

        printf("]\n");
    }

    return 0;
}