/*38. Sort array of 0s, 1s and 2s
Question description:
Write a C program to sort an array consisting of only 0s, 1s, and 2s.
Sample data:
Input: 0 1 2 0 1 2 1 0
Expected output:
Sorted array: 0 0 0 1 1 1 2 2*/

#include<stdio.h>
int sort_array(int *arr,int size)
{
    int count0=0,count1=0,count2=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        count0++;
        else if(arr[i]==1)
        count1++;
        else if(arr[i]==2)
        count2++;
    }
    int index=0;
    while(count0--)
    arr[index++]=0;

    while(count1--)
    arr[index++]=1;

    while(count2--)
    arr[index++]=2;

}
int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    sort_array(arr,size);
    printf("Sorted array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}