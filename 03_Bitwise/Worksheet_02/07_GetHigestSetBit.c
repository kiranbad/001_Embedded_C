/*7. Get highest set bit of a number
Question: Write a C program to find the position of the highest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Highest set bit of 18 is at position 4 (zero-based)*/
#include <stdio.h>

void get_highest_set_bit(int num)
{
    int position = -1;
    int temp = num;

    while(temp != 0)
    {
        position++;
        temp = temp >> 1; 
    }

    printf("Highest set bit of %d is at position %d\n", num, position);
}

int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    get_highest_set_bit(num);
    return 0;
}