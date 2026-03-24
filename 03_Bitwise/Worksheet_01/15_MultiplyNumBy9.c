/*. Write a program to multiply a number by 9 using bitwise shift operations.*/
#include <stdio.h>

int multiplyBy9(int num) {
    return (num<<3)+num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = multiplyBy9(num);
    printf("%d multiplied by 9 is %d\n", num, result);
}