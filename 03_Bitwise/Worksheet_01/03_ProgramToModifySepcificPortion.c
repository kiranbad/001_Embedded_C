/*Write a program to modify specific portions of a given integer:
Set all bits in the Least Significant Byte (LSB) to 1
Set all bits in the Most Significant Byte (MSB) to 1
Set all bits in the Least Significant Nibble to 1
Set all bits in the Most Significant Nibble to 1
Set n bits to 1 (user input)
Clear n bits (set to 0), with n as input
Toggle n bits (user input)*/
#include <stdio.h>

unsigned int setLSB(unsigned int num) {
    return num | 0xFF;
}

unsigned int setMSB(unsigned int num) {
    return num | 0xFF000000;
}

unsigned int setLSBNibble(unsigned int num) {
    return num | 0xF;
}

unsigned int setMSBNibble(unsigned int num) {
    return num | 0xF0000000;
}

unsigned int setNBits(unsigned int num, int n) {
    if (n > 0 && n <= 32)
        num |= (1U << n) - 1;
    return num;
}

unsigned int clearNBits(unsigned int num, int n) {
    if (n > 0 && n <= 32)
        num &= ~((1U << n) - 1);
    return num;
}

unsigned int toggleNBits(unsigned int num, int n) {
    if (n > 0 && n <= 32)
        num ^= (1U << n) - 1;
    return num;
}

int main() {
    unsigned int num;
    int n;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("\nOriginal number: %u\n", num);

    num = setLSB(num);
    printf("After setting LSB: %u\n", num);

    num = setMSB(num);
    printf("After setting MSB: %u\n", num);

    num = setLSBNibble(num);
    printf("After setting LSB Nibble: %u\n", num);

    num = setMSBNibble(num);
    printf("After setting MSB Nibble: %u\n", num);

    printf("\nEnter number of bits to set (n): ");
    scanf("%d", &n);
    num = setNBits(num, n);
    printf("After setting first %d bits: %u\n", n, num);

    printf("Enter number of bits to clear: ");
    scanf("%d", &n);
    num = clearNBits(num, n);
    printf("After clearing first %d bits: %u\n", n, num);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);
    num = toggleNBits(num, n);
    printf("After toggling first %d bits: %u\n", n, num);

    return 0;
}