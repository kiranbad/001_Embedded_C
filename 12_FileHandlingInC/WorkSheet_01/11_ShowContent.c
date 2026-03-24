/*11. Show all the contents in a file and also print the total number of lines.
Input: File name: lines.txt
Output: (shows all lines)
Total lines: 5*/
#include<stdio.h>
int main()
{
    FILE *fptr=fopen("lines.txt","r");
    if(fptr==NULL)
    {
        perror("File: ");
        return 1;
    }

    char ch;
    int countlines=0;
    while((ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
        if(ch=='\n')
        {
            countlines++;
        }
    }
    printf("Total Lines :%d \n",countlines);

}