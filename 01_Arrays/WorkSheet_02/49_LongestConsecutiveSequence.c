/*49. Find longest consecutive sequence
Question description:
Write a C program to find the length of the longest consecutive elements sequence.
Sample data:
Input: 100 4 200 1 3 2
Expected output:
Longest consecutive sequence length: 4 (1, 2, 3, 4)*/

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

    // Sort array (simple bubble sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int max_len = 1, curr_len = 1;

    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            curr_len++;
        } else if (arr[i] != arr[i - 1]) {
            curr_len = 1;
        }

        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }

    printf("Longest consecutive sequence length: %d\n", max_len);

    return 0;
}