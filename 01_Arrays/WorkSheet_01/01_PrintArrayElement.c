// Question: Print elements of an array
// Question description: Write a C program to read n elements into an array and display them.
// Sample data:
// Enter the number of elements: 5
// Enter the elements: 10 20 30 40 50
// Expected output:
// Elements in array are: 10 20 30 40 50

#include<stdio.h>
void printarray(int *arr,int size)
{
    printf("Elements in the array are: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printarray(arr,size);
    
}