/*6. Copy everything from one file and save it into another file.
Input: Source file: lines.txt
Destination file: copy.txt
Output: File 'lines.txt' copied to 'copy.txt'.*/

#include<stdio.h>
int main()
{
    FILE *src;
    FILE *dest;
    src =fopen("lines.txt","r");
    if(src==NULL)
    {
        perror("File: ");
        return 1;
    }

    dest=fopen("Copy.txt","w");
    if(dest==NULL)
    {
        perror("File: ");
        return 1;
    }
    char ch;
    while((ch=fgetc(src))!=EOF)
    {
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    printf("File sourcefile copied to destination file\n");
}