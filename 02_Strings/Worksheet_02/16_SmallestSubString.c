/* Find the smallest substring in a string containing all characters of another string.
Input: str1 = "this is a test string", str2 = "tist"
Output: "t stri*/
#include<stdio.h>
#include<string.h>
#include<limits.h>

void smallest_window(char *str, char *pat)
{
    int freq_pat[256] = {0};
    int freq_str[256] = {0};

    int len1 = strlen(str);
    int len2 = strlen(pat);

    for(int i = 0; i < len2; i++)
        freq_pat[pat[i]]++;

    int start = 0, start_index = -1;
    int min_len = INT_MAX;
    int count = 0;

    for(int i = 0; i < len1; i++)
    {
        freq_str[str[i]]++;

        if(freq_pat[str[i]] != 0 &&
           freq_str[str[i]] <= freq_pat[str[i]])
            count++;

        if(count == len2)
        {
            while(freq_str[str[start]] > freq_pat[str[start]] ||
                  freq_pat[str[start]] == 0)
            {
                if(freq_str[str[start]] > freq_pat[str[start]])
                    freq_str[str[start]]--;

                start++;
            }

            int window_len = i - start + 1;

            if(min_len > window_len)
            {
                min_len = window_len;
                start_index = start;
            }
        }
    }

    if(start_index == -1)
    {
        printf("No such window exists\n");
        return;
    }

    for(int i = start_index; i < start_index + min_len; i++)
        printf("%c", str[i]);
}

int main()
{
    char str1[100], str2[50];

    printf("Enter string1: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter string2: ");
    scanf("%s", str2);

    smallest_window(str1, str2);
}