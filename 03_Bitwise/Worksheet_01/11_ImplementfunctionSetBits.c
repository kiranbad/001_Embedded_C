/*Implement the function setbits(x, p, n, y) that sets n bits in x starting at position p with the rightmost n bits of y.*/
#include <stdio.h>

int setbits(int x, int p, int n, int y) {
    int mask = (1 << n) - 1;
    y = y & mask;
    mask = mask << (p - n + 1);
    x = x & (~mask);
    y = y << (p - n + 1);
    return x | y;
}

int main() {
    int x, y, p, n;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Enter position p: ");
    scanf("%d", &p);

    printf("Enter number of bits n: ");
    scanf("%d", &n);

    int result = setbits(x, p, n, y);

    printf("Result after setting bits: %d\n", result);

    return 0;
}