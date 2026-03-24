/*Question 9: Reverse Array using Pointer Arithmetic
Task: Write a function that reverses an integer array in place using pointer arithmetic only (no array indexing).
Sample data:
1
int arr[] = {1, 2, 3, 4, 5};
Expected output:
Reversed array: 5 4 3 2 1*/

#include<stdio.h>
int reverse_array_using_pointer(int *arr,int n)
{
    int *start=arr;
    int *end=arr+n-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse_array_using_pointer(arr,n);
    for(int i=0; i<5; i++){
    printf("%d",arr[i]);
    }
}