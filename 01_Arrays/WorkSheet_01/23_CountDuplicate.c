/*
Question: Count duplicate elements
Question description: Write a C program to count how many duplicate values are in the array.
Sample data:
Input: 1 2 3 1 4 2
Expected output:
Total duplicate elements: 2*/
#include <stdio.h>

int count_duplicates(int arr[], int size)
{
    int visited[size];
    int duplicate_count = 0;
    for(int i = 0; i < size; i++)
        visited[i] = 0;

    for(int i = 0; i < size; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 1;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if(count > 1)
            duplicate_count++;
    }

    return duplicate_count;
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = count_duplicates(arr, size);

    printf("Total duplicate elements: %d\n", result);

    return 0;
}