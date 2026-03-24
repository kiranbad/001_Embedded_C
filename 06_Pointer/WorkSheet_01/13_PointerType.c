/*13. Pointer Type Compatibility
Goal: Understand the importance of matching pointer types.
Activity:
Declare
int *ip; and
Try assigning
float *fp;
fp = ip; and observe compiler warning.
Correct the mismatch using proper types or casting*/
#include <stdio.h>
int main()
{
    int a = 10;
    float b = 3.14;
    int *ip = &a;
    float *fp;

    // fp=ip; incorrect assignment.
    fp = &b;
    fp = (float *)ip;
    printf("Value pointed by ip: %d\n", *ip);
    printf("Value pointed by fp: %f\n", *fp);
}