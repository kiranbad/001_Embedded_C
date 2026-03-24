/*28. Find the difference of two arrays
Question description:
Write a C program to find the difference of two arrays (elements present in first array but not in second).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Difference (Array1 - Array2): 1 2*/
#include<stdio.h>
int difference_of_two_arrays(int *arr1,int *arr2,int size1,int size2)
{
    int flag=0;
    for(int i=0; i<size1; i++)
    {
        flag=0;
        for(int j=0; j<size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d ",arr1[i]);
    }
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

    difference_of_two_arrays(arr1,arr2,size1,size2);
}