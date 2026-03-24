/*44. Rearrange positive and negative numbers 
Question description:
Write a C program to rearrange an array so that positive and negative numbers are placed alternatively.
Sample data:
Input: 1 2 3 -4 -1 4
Expected output:
Rearranged array: -4 1 -1 2 3 4*/
#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[j] < 0) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}