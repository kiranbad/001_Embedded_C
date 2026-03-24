/*36. Find second smallest element
Question description:
Write a C program to find the second smallest element in the array.
Sample data:
Input: 12 13 1 10 34 1
Expected output:
Second smallest element is 10*/

#include<stdio.h>
#include<limits.h>
int find_second_smallest(int *arr,int size)
{
    int small=INT_MAX;
    int sec_small=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<small)
        {
            sec_small=small;
            small=arr[i];
        }else if(arr[i]>small && arr[i]<sec_small)
        {
            sec_small=arr[i];
        }
    }
    printf("Second Small %d",sec_small);
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

    find_second_smallest(arr,size);
}