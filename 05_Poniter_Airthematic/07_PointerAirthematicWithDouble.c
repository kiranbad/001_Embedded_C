/*Question 7: Pointer Arithmetic with Different Data Types
Task: Log Session a double array and use pointer arithmetic to print the second element. Explain how pointer arithmetic differs for
double compared to int.
Sample data:
1

Expected output:
Second element is 2.2
Explanation:
Pointer increments by the size of double (usually 8 bytes), so moving pointer by 1 points to the next double element.*/

#include<stdio.h>
int main()
{
    double darr[] = {1.1, 2.2, 3.3};
    printf("%f ",*(darr+1));
}