/* Replace first occurrence of a character with another in a string
Input: "google", replace 'o' with 'a'
Output: "gaogle"*/


#include<stdio.h>

void replace_first_occurrence(char *str, char old, char new_char)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == old)
        {
            str[i] = new_char;
            break;   
        }
    }
}

int main()
{
    char str[50];
    char old, new_char;

    printf("Enter the String: ");
    scanf("%[^\n]", str);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &new_char);

    replace_first_occurrence(str, old, new_char);

    printf("Output: %s", str);

    return 0;
}