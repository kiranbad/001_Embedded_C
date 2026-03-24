/*
Find product of all elements
Question description:
Write a C program to find the product of all elements in the array.
Sample data:
Input: 1 2 3 4
Expected output:
Product: 24*/

#include<stdio.h>
int find_product(int *arr,int size)
{
    int product=1;
    for(int i=0; i<size; i++)
    {
        product*=arr[i];
    }
    return product;
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
    printf("Product :%d",find_product(arr,size));
}