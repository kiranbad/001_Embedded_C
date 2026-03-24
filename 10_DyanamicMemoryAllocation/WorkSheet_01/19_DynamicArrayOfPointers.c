/*Exercise 19: Dynamic Array of Pointers to Integers
Goal: Work with array of pointers using malloc.
Activity:
Ask user for count.
Allocate array of int* pointers.
Use malloc to assign an integer for each pointer.
Assign and print values.
Free all integers and the array.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int **arr = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(sizeof(int));
        scanf("%d", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);

    return 0;
}