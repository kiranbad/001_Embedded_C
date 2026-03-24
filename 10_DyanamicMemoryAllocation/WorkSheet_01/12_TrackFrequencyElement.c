/*Exercise 12: Track Frequency of Elements
Goal: Use calloc for zero-initialized counting.
Activity:
Allocate an integer array of size 100 using calloc.
Accept n numbers between 0 and 99.
Increment the value at each index to count frequency.
Display the frequencies.
Free the memory*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(100, sizeof(int));
    if (arr == NULL) {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    int n, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers (0-99):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num >= 0 && num < 100) {
            arr[num]++;
        } else {
            printf("Number %d is out of range!\n", num);
        }
    }

    printf("Frequencies:\n");
    for (int i = 0; i < 100; i++) {
        if (arr[i] > 0) {
            printf("%d occurs %d times\n", i, arr[i]);
        }
    }

    free(arr);
    return 0;
}