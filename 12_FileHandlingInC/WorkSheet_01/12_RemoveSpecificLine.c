/*12. Remove a specific line (by line number) from a file.
Input: File name: lines.txt
Line to remove: 2
Output: File now contains all lines except line 2.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *lines[20];
    char buffer[256];
    int count=0;
    FILE *fptr=fopen("lines.txt","r");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }
    int n;
    printf("Enter the Line number you want remove: ");
    scanf("%d",&n);

    while(fgets(buffer,sizeof(buffer),fptr)){
        lines[count]=malloc(strlen(buffer)+1);
        strcpy(lines[count],buffer);
        count++;
    }

    fclose(fptr);

    fptr=fopen("lines.txt","w");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }

    for(int i=0; i<count; i++)
    {
        if(i!=n-1)
        {
            fputs(lines[i],fptr);
        }
        free(lines[i]);
    }
    fclose(fptr);
    printf("Line %d removed successfully.\n",n);
    return 0;

}