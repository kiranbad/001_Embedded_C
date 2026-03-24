/*Write a program to reverse:
Bits at odd positions
Bits at even positions*/

#include <stdio.h>

unsigned int reverseOddBits(unsigned int n) {
    unsigned int result = n;
    int i, j;

    for (i = 0, j = 30; i < j; i += 2, j -= 2) {
        int bit1 = (n >> i) & 1;
        int bit2 = (n >> j) & 1;

        if (bit1 != bit2) {
            result ^= (1 << i);
            result ^= (1 << j);
        }
    }
    return result;
}

unsigned int reverseEvenBits(unsigned int n) {
    unsigned int result = n;
    int i, j;

    for (i = 1, j = 31; i < j; i += 2, j -= 2) {
        int bit1 = (n >> i) & 1;
        int bit2 = (n >> j) & 1;

        if (bit1 != bit2) {
            result ^= (1 << i);
            result ^= (1 << j);
        }
    }
    return result;
}

int main() {
    unsigned int num;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("After reversing odd position bits: %u\n", reverseOddBits(num));
    printf("After reversing even position bits: %u\n", reverseEvenBits(num));

    return 0;
}