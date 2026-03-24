/*7. Memory Management and Buffer Overflow Prevention
Goal: Implement safe memory handling practices to prevent buffer overflows and related security issues.
Activity:
1. Allocate buffers dynamically to match expected input sizes.
2. Use safe input functions that limit the number of characters read.
3. Validate input sizes before copying or appending to buffers.
4. Practice freeing memory correctly to avoid leaks or dangling pointers.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int size;
    printf("Enter the String size: ");
    scanf("%d",&size);
    getchar();

    char *buffer=malloc(size);
    if(buffer==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string : ");
    fgets(buffer,size,stdin);

    printf("Stored string : %s",buffer);

    free(buffer);
    buffer=NULL;

}