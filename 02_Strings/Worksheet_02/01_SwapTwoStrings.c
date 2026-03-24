/*. Swap the contents of two strings without using any extra temporary string variables. The strings' values should be
exchanged completely.
Input: str1 = "hello", str2 = "world"
Output: str1 = "world", str2 = "hello"*/
#include<stdio.h>
#include<string.h>

void swap_strings(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    strcat(str1, str2); 
    strncpy(str2, str1, len1);
    str2[len1] = '\0';
    strcpy(str1, str1 + len1);
}

int main()
{
    char str1[30], str2[30];
    printf("Enter the String 1: ");
    scanf("%[^\n]", str1);
    printf("Enter the String 2: ");
    scanf(" %[^\n]", str2);
    swap_strings(str1, str2);
    printf("After Swapping:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}