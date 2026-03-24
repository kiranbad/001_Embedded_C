/*7. Dangling Pointer Scenario
Goal: Identify potential risks and behavior of dangling pointers in embedded dynamic memory management.
Activity:
Write a function that allocates a block of memory dynamically using 

int *allocate_buffer(void) {
  int *buf = (int *)malloc(10 * sizeof(int));
  return buf;
}
malloc() and returns the pointer:
In the calling context, free the memory pointed to and then try to access it via the original pointer.
Use debug prints or debugger to observe system behavior.*/

#include<stdio.h>
#include<stdlib.h>
int *allocate_buffer()
{
    int *buf=malloc(10*sizeof(int));
    return buf;
}
int main()
{
    int *buffer=allocate_buffer();
    buffer[0]=10;
    buffer[1]=20;
    printf("Before free() %d %d\n",buffer[0],buffer[1]);
    free(buffer);
    printf("Memory Freed.\n");
    printf("After free() %d %d\n",buffer[0],buffer[1]);

}