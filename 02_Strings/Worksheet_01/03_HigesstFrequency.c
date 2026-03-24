/*Find highest frequency character in a string
          Input: "engineering"
          Output: 'e' appears 3 times
*/
#include<stdio.h>
#include<string.h>

void find_highest_frequency(char *str)
{
    int freq[256] = {0};
    int max = 0;
    char max_char = '\0';

    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[(unsigned char)str[i]] > max)
        {
            max = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }

    printf("'%c' appears %d times\n", max_char, max);
}

int main()
{
    char str[50];

    printf("Enter the String: ");
    scanf("%[^\n]", str);

    find_highest_frequency(str);

    return 0;
}