/*Exercise 18: Insert Element at Any Position
Goal: Modify dynamic array and shift elements.
Activity:
Allocate memory for an array.
Accept n values.
Ask user to insert a value at a specific position.
Use realloc to increase size.
Shift elements and insert new value.
Print final array and free memory.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, value;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert : ", n);
    scanf("%d", &pos);


    arr = realloc(arr, (n + 1) * sizeof(int));
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}