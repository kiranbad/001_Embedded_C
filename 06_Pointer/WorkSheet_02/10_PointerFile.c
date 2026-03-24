/*10. Pointer and File I/O
Goal: Use pointers and dynamic memory to efficiently read and write data of variable sizes to files.
Activity:
1. Open a file for reading and writing.
2. Determine the size of the file or data to read.
3. Dynamically allocate a buffer to hold file data.
4. Use pointers to read the data into memory and write data back to a file.
5. Close the file and free allocated memory.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr,*fptr2;
    char *buffer;
    int size;
    fptr=fopen("text.txt","r");
    if(fptr==NULL)
    {
        printf("File not found\n");
        return 1;
    }

    fseek(fptr,0,SEEK_END);
    size=ftell(fptr);

    rewind(fptr);

    buffer=malloc(size+1);

    fread(buffer,1,size,fptr);

    buffer[size]='\0';

    printf("File data: %s",buffer);

    fptr2=fopen("output.txt","w");
    fwrite(buffer,1,size,fptr2);
    fclose(fptr);
    fclose(fptr2);
    free(buffer);

}