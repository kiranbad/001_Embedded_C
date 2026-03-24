/*4. Void Pointers and Memory Copying
Goal: Use void pointers to create a generic memory copying utility function for embedded data types.
Activity:
Declare a function 
1
mem_copy(void *dest, const void *src, size_t n) that copies n bytes from src to dest :
void mem_copy(void *dest, const void *src, size_t n);
Within the function, use 
char * pointers to copy data byte-by-byte.
Test the function by copying an array of integers and an array of floats.*/
#include <stdio.h>
#include <stddef.h>

void mem_copy(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;

    for(size_t i = 0; i < n; i++)
    {
        d[i] = s[i];
    }
}

int main()
{
    int a[3] = {10,20,30};
    int b[3];

    float x[3] = {1.1,2.2,3.3};
    float y[3];

    mem_copy(b, a, sizeof(a));
    mem_copy(y, x, sizeof(x));

    printf("Copied int array:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nCopied float array:\n");
    for(int i=0;i<3;i++)
    {
        printf("%.1f ", y[i]);
    }

    return 0;
}