/*27. Find the intersection of two arrays
Question description:
Write a C program to find the intersection of two arrays (common elements).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Intersection: 3 4*/


#include<stdio.h>
int intersection_of_arrays(int *arr1,int *arr2,int size1,int size2)
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
        if(!flag)
        {
            printf("%d ",arr2[i]);
        }
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

    intersection_of_arrays(arr1,arr2,size1,size2);
}