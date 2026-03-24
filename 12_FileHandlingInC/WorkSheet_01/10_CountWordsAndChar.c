/*10. Count both the number of words and the number of characters in a file.
Input: File name: info.txt (content: This is a test file.)
Output: Words: 5
Characters: 21*/
#include<stdio.h>
int main()
{
    char ch;
    int charcount=0,wordcount=0;
    FILE *fptr=fopen("Copy.txt","r");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }

    while((ch=fgetc(fptr))!=EOF)
    {
        charcount++;
        if(ch==' '|| ch=='\n' || ch=='\t'){
            wordcount++;
        }
    }

    fclose(fptr);

    printf("WordCount: %d\n",wordcount);
    printf("CharacterCount: %d\n",charcount);


}