/*35. Find equilibrium index
Question description:
Write a C program to find the index where the sum of elements to the left is equal to the sum to the right.
Sample data:
Input: -7 1 5 2 -4 3 0
Expected output:
Equilibrium index is 3*/
#include<stdio.h>
int find_equilibrium_index(int *arr,int size)
{
    int total_sum=0;
    for(int i=0; i<size; i++)
    {
        total_sum+=arr[i];
    }

    int left_sum=0;
    for(int i=0; i<size; i++)
    {
        total_sum-=arr[i];
        if(total_sum==left_sum)
        {
            return i;
        }
        left_sum+=arr[i];
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

    printf("Equilibrium index is %d",find_equilibrium_index(arr,size));

}