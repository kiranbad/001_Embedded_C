/*Count occurrences of a number
Question description:
Write a C program to count how many times a specific number appears in an array.
Sample data:
Input array: 1 2 3 2 2 5 Number to count: 2
Expected output:
Number 2 occurs 3 times*/
#include<stdio.h>
void count_occurrence(int *arr, int size, int num)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
            count++;
    }

    printf("Number %d occurs %d times\n", num, count);
}

int main()
{
    int size,num;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to count: ");
    scanf("%d",&num);
    count_occurrence(arr,size,num);

}