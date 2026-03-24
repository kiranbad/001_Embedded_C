/*3. Take several lines from the user and write all of them into a file.
Input: File name: lines.txt
Number of lines: 3
Lines: Line one, Line two, Line three
Output: All lines saved in 'lines.txt'.*/
#include<stdio.h>
int main()
{
    int n;
    char lines[50];
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    getchar();
    FILE *fptr=fopen("lines.txt","w");
    if(fptr==NULL)
    {
        printf("Filed not created: ");
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        printf("Enter the line %d:",i+1);
        fgets(lines,sizeof(lines),stdin);
        fputs(lines,fptr);
    }

    fclose(fptr);
    printf("Alllines saved in 'lines.txt'.\n");
    return 0;
}