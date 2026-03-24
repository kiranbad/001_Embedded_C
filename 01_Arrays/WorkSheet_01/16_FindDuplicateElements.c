/* Question: Find duplicate elements
Question description: Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2 */
#include <stdio.h>
void find_duplicates(int arr[], int size)
{
    int visited[size];

    for(int i = 0; i < size; i++)
        visited[i] = 0;

    printf("Duplicate elements: ");

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
        {
            printf("%d ", arr[i]);
        }
    }
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

    find_duplicates(arr, size);

    return 0;
}