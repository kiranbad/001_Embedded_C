/*. Passing Array to Function
Goal: Learn how arrays are passed to functions as pointers.
Activity:
Write void display(int *arr, int n);
Inside the function, loop using pointer arithmetic to print elements.*/

#include<stdio.h>
void print(int *arr,int n)
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",*(arr+i));
    }
}
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    int n=5;
    print(arr,n);
}