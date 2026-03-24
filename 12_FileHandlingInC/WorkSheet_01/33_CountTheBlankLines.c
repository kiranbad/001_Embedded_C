/*33. Count how many empty (blank) lines are in a file.
Input: File: data.txt
Output: Blank lines: 1*/
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
        if (strcmp(line, "\n") == 0)   // check blank line
        {
            count++;
        }
    }

    fclose(fp);

    printf("Blank lines: %d\n", count);

    return 0;
}