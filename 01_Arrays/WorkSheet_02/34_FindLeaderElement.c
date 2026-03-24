/*34. Find leader elements in array
Question description:
Write a C program to find all leader elements in the array (elements greater than all elements to their right).
Sample data:
Input: 16 17 4 3 5 2
Expected output:
Leader elements: 17 5 2*/
#include<stdio.h>
int find_leader_element(int *arr,int size)
{
    int leaders[size];
    int max_from_right=arr[size-1];
    int count=0;
    leaders[count++]=max_from_right;
    for(int i=size-2; i>=0; i--)
    {
        if(arr[i]>max_from_right)
        {
            max_from_right=arr[i];
            leaders[count++]=arr[i];
        }
    }

    printf("Leader elements: ");
    for(int i=count-1; i>=0; i--)
    {
        printf("%d ",leaders[i]);
    }
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

    find_leader_element(arr,size);

}