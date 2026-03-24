// Question: Copy array elements
// Question description: Write a C program to copy all elements from one array to another.
// Sample data:
// Input: 1 2 3 4 5
// Expected output:
// Copied array: 1 2 3 4 5

#include<stdio.h>
void Copy_Arrays(int *arr1,int *arr2,int size)
{
    for(int i=0; i<size; i++)
    {
        arr2[i]=arr1[i];
    }

    printf("Copied array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];

    printf("Enter the arrry 1 elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }

    Copy_Arrays(arr1,arr2,size) ;
}