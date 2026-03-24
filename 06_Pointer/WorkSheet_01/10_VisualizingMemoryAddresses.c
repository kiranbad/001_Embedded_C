/*10. Visualizing Memory Addresses
Goal: Visualize how memory is arranged for variables.
Activity:
Declare three local variables.
Print their addresses using printf.
Observe the increasing/decreasing pattern.*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("a address %p\nb address %p\nc address %p",&a,&b,&c);
}