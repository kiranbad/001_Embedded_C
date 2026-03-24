/*Find lowest frequency character in a string
Input: "engineering"
Output: 'g', 'r', 'n' each appear once*/
#include <stdio.h>
#include <limits.h>
#include <string.h>

void find_lowest_frequency(char *str)
{
    int freq[256] = {0};
    int min = INT_MAX;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]!= ' ')
        {
            freq[(unsigned char)str[i]]++;
        }
    }
    for (int i = 0;i < 256;i++)
    {
        if(freq[i]>0 && freq[i]<min)
        {
            min=freq[i];
        }
    }

    printf("Characters with lowest frequency (%d times): ", min);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && freq[(unsigned char)str[i]] == min)
        {
            printf("'%c' ", str[i]);
            freq[(unsigned char)str[i]] = 0;
        }
    }

    printf("\n");
}

int main()
{
    char str[50];
    printf("Enter the String: ");
    scanf("%[^\n]", str);
    find_lowest_frequency(str);
}