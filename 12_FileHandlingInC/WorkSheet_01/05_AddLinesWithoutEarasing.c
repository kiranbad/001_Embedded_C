/*5. Add more lines to the end of a file without erasing its current content.
Input: File name: lines.txt
Number of new lines: 2
New lines: Line four, Line five
Output: File now contains: Line one, Line two, Line three, Line four, Line five*/
#include<stdio.h>
int main()
{
    char line[100];
    FILE  *fptr=fopen("lines.txt","a");
    if(fptr==NULL)
    {
        perror("File:");
        return 1;
    }

    int n;
    printf("Enter the number of new lines: ");
    scanf("%d",&n);
    getchar();

    for(int i=0; i<n; i++){
        printf("Enter line %d: ",i+1);
        fgets(line,sizeof(line),stdin);
        fprintf(fptr,"%s",line);
    }
    fclose(fptr);
    printf("Lines added successfully.\n");

    fptr=fopen("lines.txt","r");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }

    while(fgets(line,sizeof(line),fptr)){
        printf("%s",line);
    }
    fclose(fptr);
    return 0;
}