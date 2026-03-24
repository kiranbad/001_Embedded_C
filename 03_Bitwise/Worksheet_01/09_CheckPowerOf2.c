/* Write a C program to check whether a number is a power of 2 using bitwise operations.*/
#include <stdio.h>

int isPowerOfTwo(int num) {
    return (num>0) && ((num&(num-1)) == 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is NOT a power of 2.\n", num);
    }

    return 0;
}