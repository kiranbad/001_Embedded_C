/*37. Check if array is subset of another
Question description:
Write a C program to check if one array is a subset of another array.
Sample data:
Array 1: 1 2 3 4 5 Array 2: 2 4 5
Expected output:
Array2 is a subset of Array1*/

#include<stdio.h>
void check_subset(int *arr1,int *arr2,int size1,int size2)
{
    int count=0;
    for(int i=0; i<size2; i++)
    {
        for(int j=0; j<size1; j++)
        {
            if(arr2[i]==arr1[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==size2)
    printf("Array2 is a subset of Array1\n");
    else
    printf("Array2 is not a subset of Array2\n");
}
int main()
{
    int size1,size2;
    printf("Enter the array size1 and size2:");
    scanf("%d%d",&size1,&size2);

    int arr1[size1];
    int arr2[size2];
    printf("Enter the array 1 elements: ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the array 2 elements: ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    check_subset(arr1,arr2,size1,size2);
}