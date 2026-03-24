/*47. Find maximum sum of k consecutive elements
Question description:
Write a C program to find maximum sum of k consecutive elements in an array.
Sample data:
Input: 2 3 4 1 5 6 7 k = 3
Expected output:
Maximum sum of 3 consecutive elements: 18*/
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int max_sum = 0;

    for (i = 0; i <= n - k; i++) {
        int sum = 0;

        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }

        if (i == 0 || sum > max_sum) {
            max_sum = sum;
        }
    }

    printf("Maximum sum of %d consecutive elements: %d\n", k, max_sum);

    return 0;
}