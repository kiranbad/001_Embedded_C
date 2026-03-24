/*16. Change all the letters in a file to lowercase.
Input: File name: info.txt (content: Hello World!)
Output: hello world!*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    FILE *fptr=fopen("Copy.txt","r");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }
    long size;
    char *buffer;
    fseek(fptr,0,SEEK_END);
    size=ftell(fptr);
    rewind(fptr);

    buffer=(char *)malloc(size+1);
    if(buffer==NULL)
    {
        printf("Memory Not allocated'\n");
        fclose(fptr);
        return 1;
    }

    fread(buffer,1,size,fptr);
    buffer[size]='\0';
    fclose(fptr);

    for(int i=0; i<size; i++)
    {
        buffer[i]=tolower(buffer[i]);
    }

    fptr=fopen("Copy.txt","w");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }

    fwrite(buffer,1,size,fptr);
    fclose(fptr);
    free(buffer);

    printf("File converted to lowercase sucessfully.\n");
}