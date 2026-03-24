/*30. Count pairs with given sum
Question description:
Write a C program to find number of pairs in the array whose sum is equal to a given value.
Sample data:
Input array: 1 5 7 -1 5 Sum = 6
Expected output:
Number of pairs: 3*/

#include<stdio.h>
int count_pairs(int *arr,int size,int sum)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(i!=j && (arr[i]+arr[j]==sum))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int size,sum;
    printf("Enter the arrays size : ");
    scanf("%d",&size);

    printf("Enter sum value : ");
    scanf("%d",&sum);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Number of Pairs: %d\n",count_pairs(arr,size,sum));
    
}