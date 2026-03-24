/*31. Find missing number in array
Question description:
Write a C program to find the missing number in an array of size n containing numbers from 1 to n+1.
Sample data:
Input: 1 2 4 5 6
Expected output:
Missing number is: 3*/
#include<stdio.h>
int find_missing_num(int *arr,int size)
{
    int actual_sum=0;
    for(int i=0; i<size; i++)
    {
        actual_sum+=arr[i];
    }
    int expected_sum=((size+1)*(size+2))/2;
    printf("Missing number is: %d\n",expected_sum-actual_sum);
}
int main()
{
    int size;
    printf("Enter the arrays size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    find_missing_num(arr,size);
    
}