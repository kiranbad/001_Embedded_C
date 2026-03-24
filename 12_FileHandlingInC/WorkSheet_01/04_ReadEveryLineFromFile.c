/*4. Read every line from a file and store those lines in an array.
Input: File name: lines.txt
Output: Line one, Line two, Line three (as array elements)*/
#include<stdio.h>
int main()
{
    FILE *fptr;
    char lines[10][10];
    int i=0;

    fptr=fopen("Lines.txt","r");

    if(fptr==NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    while(fgets(lines[i],100,fptr)!=NULL)
    {
        i++;
    }

    fclose(fptr);

    printf("Lines stored in array: \n");
    for(int j=0; j<i; j++)
    {
        printf("%s",lines[j]);
    }
    return 0;

}