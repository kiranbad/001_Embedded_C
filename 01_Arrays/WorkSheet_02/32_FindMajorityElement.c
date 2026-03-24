/*32. Find the majority element
Question description:
Write a C program to find the majority element in an array (element appearing more than n/2 times).
Sample data:
Input: 2 2 1 2 3 2 2
Expected output:
Majority element: 2*/

#include <stdio.h>
void find_majority(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        int count=0;

        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        if(count>size/2)
        {
            printf("Majority element: %d", arr[i]);
            return;
        }
    }

    printf("No majority element found");
}

int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    find_majority(arr, size);

    return 0;
}