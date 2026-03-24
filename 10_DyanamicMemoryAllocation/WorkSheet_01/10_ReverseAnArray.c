/*Exercise 10: Log Session and Reverse an Array
Goal: Use pointers to reverse dynamically allocated memory.
Activity:
Allocate an array of integers using malloc.
Accept n values.
Reverse the array using pointer arithmetic (not indexing).
Print reversed values.
Free the memory.*/
#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    reverseArray(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr);
    return 0;
}