/*8. Get lowest set bit of a number
Question: Write a C program to find the position of the lowest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Lowest set bit of 18 is at position 1 (zero-based)*/
#include <stdio.h>

void get_lowest_set_bit(int num)
{
    if(num == 0)
    {
        printf("No bits are set in %d\n", num);
        return;
    }

    int position = 0; // zero-based index
    int temp = num;

    while((temp & 1) == 0) // check LSB
    {
        temp = temp >> 1;   // shift right
        position++;
    }

    printf("Lowest set bit of %d is at position %d\n", num, position);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    get_lowest_set_bit(num);
    return 0;
}