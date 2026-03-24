/* Move all zeros to end of array
http://192.168.2.101/link/225#bkmrk-question-description-19

Question description:
Write a C program to move all zeros in the array to the end while maintaining the order of non-zero elements.
Sample data:
Input: 1 0 2 0 0 3 4
Expected output:
Output: 1 2 3 4 0 0 0*/

int move_zeros(int *arr, int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    while (index < size)
    {
        arr[index] = 0;
        index++;
    }
}
#include <stdio.h>
int main()
{
    int size, num;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    move_zeros(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}