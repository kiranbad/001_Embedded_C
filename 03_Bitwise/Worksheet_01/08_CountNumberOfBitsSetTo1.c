/*Write a C program to count the number of bits set to 1 in an integer. Also compare different methods. Additionally, check if the 20th bit of a 32-bit integer is set.*/
#include <stdio.h>

int countBits(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1)
            count++;
        n = n / 2;
    }

    return count;
}

int check20thBit(int n) {
    if (n & (1 << 19))
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Set bits: %d\n", countBits(num));

    if (check20thBit(num))
        printf("20th bit is SET\n");
    else
        printf("20th bit is NOT SET\n");

    return 0;
}