// Question: Find for an element
// Question description: Write a C program to search for a number in an array and print its index.
// Sample data:
// Array: 10 20 30 40 50
// Find: 30
// Expected output:
// Element found at index: 2
#include<stdio.h>
int Find_element(int *arr,int key,int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int size,key;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element to search : ");
    scanf("%d",&key);

    int pos=Find_element(arr,key,size);
    if(pos>=0)
    printf("Element found at index: %d\n",pos);
    else
    printf("Element not found \n");

}