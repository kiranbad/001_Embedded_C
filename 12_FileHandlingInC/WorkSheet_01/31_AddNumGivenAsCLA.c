/*31. Add up numbers given as command line arguments and write the answer into a file.
Input: Arguments: 3 4 5, Output file: sum.txt
Output: sum.txt contains: 12*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
    FILE *fp;

    // Check if numbers are given
    if (argc < 2)
    {
        printf("Please provide numbers as command line arguments\n");
        return 1;
    }

    // Convert arguments to integers and add
    for (i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }

    // Open file to write result
    fp = fopen("sum.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    // Write sum into file
    fprintf(fp, "%d", sum);

    fclose(fp);

    printf("Sum written to sum.txt\n");

    return 0;
}