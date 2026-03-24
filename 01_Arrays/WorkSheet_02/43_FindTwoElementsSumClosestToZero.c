/* Find two elements whose sum is closest to zero 
Question description:
Write a C program to find two elements whose sum is closest to zero.
Sample data:
Input: 1 60 -10 70 -80 85
Expected output:
Pair whose sum is closest to zero: -80 85*/
#include<stdio.h>
int find_Two_elements_sum_closest_to_zero(int *arr,int size)
{
    
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
    find_Two_elements_sum_closest_to_zero(arr,size);
}