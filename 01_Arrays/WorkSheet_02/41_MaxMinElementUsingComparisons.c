/*41. Find the minimum and maximum element using minimum comparisons 
Question description:
Write a C program to find minimum and maximum elements using minimum number of comparisons.
Sample data:
Input: 1000 11 445 1 330 3000
Expected output:
Minimum element is 1 Maximum element is 3000*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;

    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            max = arr[0];
            min = arr[1];
        } else {
            max = arr[1];
            min = arr[0];
        }
        i = 2;
    } else {
        min = max = arr[0];
        i = 1;
    }

    while (i < n - 1) {
        int local_min, local_max;

        if (arr[i] > arr[i + 1]) {
            local_max = arr[i];
            local_min = arr[i + 1];
        } else {
            local_max = arr[i + 1];
            local_min = arr[i];
        }

        if (local_max > max)
            max = local_max;

        if (local_min < min)
            min = local_min;

        i += 2;
    }

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;
}