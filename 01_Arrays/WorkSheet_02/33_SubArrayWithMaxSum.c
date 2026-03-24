/*Find subarray with maximum sum (Kadane’s Algorithm)
 
Question description:
Write a C program to find the maximum sum of a contiguous subarray.
Sample data:
Input: -2 -3 4 -1 -2 1 5 -3
Expected output:
Maximum contiguous sum is 7*/
#include<stdio.h>
#include<limits.h>
int maximum(int current_sum,int max_sum)
{
    if(current_sum>max_sum)
    return current_sum;
    else
    return max_sum;
}
int max_sub_array(int *arr,int size)
{
    int current_sum=0,max_sum=INT_MIN;
    for(int i=0; i<size; i++)
    {
        current_sum+=arr[i];
        if(max_sum<current_sum)
        max_sum=maximum(current_sum,max_sum);
        if(current_sum<0)
        current_sum=0;
    }
    return max_sum;
}
int main()
{
    int size,num;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Maximum continuogus sum is %d",max_sub_array(arr,size));

}