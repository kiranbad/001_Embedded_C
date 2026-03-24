/*Check if array is palindrome
Question description:
Write a C program to check whether an array is palindrome (reads the same forward and backward).
Sample data:
Input: 1 2 3 2 1
Expected output:
The array is a palindrome.*/

#include<stdio.h>
int check_palindrome(int *arr,int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{
    int size;
    printf("Enter the arrays size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    if(check_palindrome(arr,size))
    printf("The array is a palindrome.\n");
    else
    printf("The array is not a palindrome.\n");
}