/* Modify Array Elements Using Pointers
Goal: Learn to modify values in an array using pointer operations.
Activity:
Log Session int arr[] = {2, 4, 6};
Use pointer arithmetic to increase each element by 1.
Print modified array.*/
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    for(int i=0; i<5; i++)
    {
        printf("%d ",++(*(arr+i)));
    }
}