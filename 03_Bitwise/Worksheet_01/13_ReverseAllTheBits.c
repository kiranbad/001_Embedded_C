/*Write a program to reverse all bits in an integer.
*/
#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    int i;

    for (i = 0; i < 32; i++) {
        rev = rev << 1;
        if (n & 1)
            rev = rev | 1;
        n = n >> 1;
    }

    return rev;
}

int main() {
    unsigned int num;

    printf("Enter an integer: ");
    scanf("%u", &num);

    unsigned int result = reverseBits(num);

    printf("Reversed bits value: %u\n", result);

    return 0;
}