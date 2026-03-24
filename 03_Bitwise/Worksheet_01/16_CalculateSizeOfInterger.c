/*16. Write a program to determine the size (in bits) of an integer using bit shifts*/
#include <stdio.h>

int main() {
    unsigned int num;
    int bits = 0;

    printf("Enter a positive integer: ");
    scanf("%u", &num);
    unsigned int temp = num;

    while (temp != 0) {
        temp = temp >> 1;
        bits++;
    }
    printf("Number of bits required to represent %u is %d\n", num, bits);
}