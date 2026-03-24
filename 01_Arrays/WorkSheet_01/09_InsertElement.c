// Question: Insert element at position
// Question description: Write a C program to insert a number at a given position in an array.
// Sample data:
// Array: 10 20 30 40
// Insert: 25 at position 2
// Expected output:
// Array after insertion: 10 20 25 30 40

#include <stdio.h>

void insert_element(int arr[], int *size, int value, int pos)
{

    if (pos < 0 || pos > *size)
    {
        printf("Invalid position\n");
        return;
    }

    for (int i = *size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    (*size)++;
}

int main()
{
    int size, value, pos;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size + 1];

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter position (0 to %d): ", size);
    scanf("%d", &pos);

    insert_element(arr, &size, value, pos);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}