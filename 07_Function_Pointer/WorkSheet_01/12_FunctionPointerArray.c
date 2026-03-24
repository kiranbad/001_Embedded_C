/*12. Function Pointer Array for String Operations
Implement several string manipulation functions (reverseString, toUpperCase, countVowels), each accepting a
string argument.
Store these functions in an array of function pointers.
Prompt the user to choose an operation and apply it to their input string using the selected function pointer.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed String: %s\n", str);
}

void toUpperCase(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase String: %s\n", str);
}

void countVowels(char *str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);
}

int main()
{
    char str[100];
    int choice;

    void (*fptr[])(char *) = {reverseString, toUpperCase, countVowels};

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';   // remove newline

    printf("\n1. Reverse String\n");
    printf("2. Convert to Uppercase\n");
    printf("3. Count Vowels\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            fptr[0](str);
            break;

        case 2:
            fptr[1](str);
            break;

        case 3:
            fptr[2](str);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}