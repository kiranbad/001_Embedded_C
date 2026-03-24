/*5. Pointer Arithmetic with Arrays
Goal: Learn how to access array elements using pointer arithmetic.
Activity:
Declare: int arr[5] = {10, 20, 30, 40, 50};
Use int *p = arr;
Use a loop to print all elements via *(p + i).*/
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    for(int i=0; i<5; i++)
    {
        printf("%d ",*(p+i));
    }
}