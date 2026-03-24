/*50. Find the missing two numbers in an array
Question description:
Write a C program to find two missing numbers from an array containing numbers from 1 to n+2.
Sample data:
Input: 1 2 4 6
Expected output:
Missing numbers: 3 5*/

#include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = n + 2;

    printf("Missing numbers: ");

    for (i = 1; i <= total; i++) {
        found = 0;

        for (j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}