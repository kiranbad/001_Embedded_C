/*21. Join two files together and save the result in a new file.
Input: File 1: a.txt (AAA)
File 2: b.txt (BBB)
New file: ab.txt
Output: ab.txt content: AAA
BBB*/

#include<stdio.h>
int main()
{
    FILE *filea=fopen("a.txt","r");
    if(filea==NULL)
    {
        perror("File: ");
        return 1;
    }

    FILE *fileb=fopen("b.txt","r");
    if(fileb==NULL)
    {
        perror("File: ");
        return 1;
    }
    FILE *fileab=fopen("ab.txt","w");
    if(fileab==NULL)
    {
        perror("File: ");
        return 1;
    }
    char ch;
    while((ch=fgetc(filea))!=EOF)
    {
        fputc(ch,fileab);
    }
    fputc('\n', fileab);

    while((ch=fgetc(fileb))!=EOF)
    {
        fputc(ch,fileab);
    }
    fclose(filea);
    fclose(fileb);
    fclose(fileab);
    printf("Two Files are joined.\n");
    return 0;

}