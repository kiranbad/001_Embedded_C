/* For a stream of characters, print the first non-repeating character at each step.
Input stream: "aabc"
Output: "a a b b"*/
#include<stdio.h>
#include<string.h>
void print_first_non_repeating_char(char *str)
{
    int freq[256] = {0};
    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;

        for(int j = 0; j <= i; j++)
        {
            if(freq[str[j]] == 1)
            {
                printf("%c ", str[j]);
                break;
            }
        }
    }
}

int main()
{
    char str[30];
    printf("Enter the String: ");
    scanf("%s", str);
    print_first_non_repeating_char(str);
}