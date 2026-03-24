/*2. Array and Pointer Arithmetic
Goal: Traverse and manipulate arrays by using pointers and pointer arithmetic instead of array indexing.
Activity:
1. Log Session an array of integers.
2. Use a pointer to iterate through the array elements by incrementing the pointer.
3. Perform operations like summing the elements or modifying them using only the pointer (no array indices).
4. Implement a function that receives a pointer and size to reverse the array elements in place.*/
#include<stdio.h>
void reverse(int *arr,int n)
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
void sum_of_elements(int *arr,int *sum,int n)
{
    for(int i=0; i<n; i++)
    {
        *sum+=*(arr+i);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int sum=0,n=5;
    sum_of_elements(arr,&sum,n);
    printf("%d\n",sum);
    reverse(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d",*(arr+i));
    }
}