/*Question 5: Traverse Array with Pointer Arithmetic
Task: Using only a pointer (no array indexing), print all elements of the array.
Sample data:
1
int arr[] = {100, 200, 300, 400};
Expected output:
100 200 300 400*/
#include<stdio.h>
int main()
{
    int arr[] = {100, 200, 300, 400};
    for(int i=0; i<4; i++)
    {
        printf("%d ",*(arr+i));
    }
}