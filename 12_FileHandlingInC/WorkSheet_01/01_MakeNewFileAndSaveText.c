/*1. Make a new file and save some text entered by the user.
Input: File name: test.txt
Text: Hello, this is my first file!
Output: File 'test.txt' created and saved.*/
#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fptr = fopen("test.txt", "w");
    if (fptr == NULL)
        perror("File:");
    char buffer[50];
    printf("Enter some text: ");
    scanf("%[^\n]", buffer);

    fwrite(buffer, 1, strlen(buffer), fptr);
    fclose(fptr);

    printf("File 'test.txt' created and saved.\n");
}