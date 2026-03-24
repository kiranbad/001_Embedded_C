/*Use memmove to shift a portion of an array forward safely.*/
#include <stdio.h>
#include <string.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    // Shift first 3 elements forward by 2 positions
    memmove(arr + 2, arr, 3 * sizeof(int));

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}