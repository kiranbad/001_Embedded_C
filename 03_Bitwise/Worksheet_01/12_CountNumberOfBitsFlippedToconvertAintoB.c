/*Given two integers A and B, write a program to count the number of bits that need to be flipped to convert A into B.*/
#include <stdio.h>

int countFlips(int a, int b) {
    int x = a ^ b;
    int count = 0;

    while (x > 0) {
        if (x % 2 == 1)
            count++;
        x = x / 2;
    }

    return count;
}

int main() {
    int A, B;

    printf("Enter value of A: ");
    scanf("%d", &A);

    printf("Enter value of B: ");
    scanf("%d", &B);

    int result = countFlips(A, B);

    printf("Number of bits to flip: %d\n", result);

    return 0;
}