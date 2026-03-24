/*2. Open an existing file and display its contents on the screen.
Input: File name: test.txt
Output: Hello, this is my first file!*/
#include<stdio.h>
int main()
{
    FILE *fptr=fopen("test.txt","r");
    if(fptr==NULL)
    {
        printf("File cannot be created.\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}