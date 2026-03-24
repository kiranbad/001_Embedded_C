/*40. Find the maximum difference between two elements such that larger element appears after the smaller
Question description:
Write a C program to find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
Sample data:
Input: 2 3 10 6 4 8 1
Expected output:
Maximum difference: 8 (10 - 2)*/
#include <stdio.h>

int main(){
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_diff = arr[1] - arr[0];
    int i, j;

    // Compare every pair where j > i
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                int diff = arr[j] - arr[i];
                if (diff > max_diff) {
                    max_diff = diff;
                }
            }
        }
    }

    printf("Maximum difference: %d\n", max_diff);

    return 0;
}