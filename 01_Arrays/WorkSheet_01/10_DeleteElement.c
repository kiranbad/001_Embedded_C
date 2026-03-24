/* Question: Delete element at position
Question description: Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40 */
#include <stdio.h>

void delete_element(int arr[], int *size, int pos)
{
    if (pos < 0 || pos >= *size)
    {
        printf("Invalid position\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main()
{
    int size, pos;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: %d\n", size - 1);
    scanf("%d", &pos);

    delete_element(arr, &size, pos);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}