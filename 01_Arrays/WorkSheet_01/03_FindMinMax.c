// Question: Find maximum and minimum element
// Question description: Write a C program to find the largest and smallest element in the array.
// Sample data:
// Input: 8 3 15 6 2
// Expected output:
// Maximum = 15
// Minimum = 2
#include<stdio.h>
#include<limits.h>
void Find_Max_Min(int *arr,int min,int max,int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }

    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);

}
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];
    int max=INT_MIN,min=INT_MAX;
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    Find_Max_Min(arr,min,max,size);  
}