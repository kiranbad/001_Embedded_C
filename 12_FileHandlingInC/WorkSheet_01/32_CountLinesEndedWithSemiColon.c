/*32. Count how many lines in a file end with a semicolon.
Input: File: data.txt (lines, some end with ;)
Output: Lines ending with semicolon: 2*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char line[100];
    int count = 0;

    fp = fopen("data.txt", "r");

    while (fgets(line, 100, fp))
    {
        int len = strlen(line);

        if (line[len-2] == ';')   // check last character before newline
        {
            count++;
        }
    }

    fclose(fp);

    printf("Lines ending with semicolon: %d\n", count);

    return 0;
}