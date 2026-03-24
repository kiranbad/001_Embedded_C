// Question: Sum of all elements in array
// Question description: Write a C program to find the sum of all array elements entered by the user.
// Sample data:
// Input: 1 2 3 4 5
// Expected output:
// Sum = 15

#include<stdio.h>
int find_sum_of_array_elements(int *arr,int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elemnts : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int res=find_sum_of_array_elements(arr,size);
    printf("Sum = %d\n",res);
}