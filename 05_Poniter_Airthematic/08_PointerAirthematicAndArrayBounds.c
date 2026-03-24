/*Question 8: Pointer Arithmetic and Array Bounds
Task: Write code that attempts to access memory outside an array using pointer arithmetic and explain why this is unsafe.
Sample data:
1
2
int arr[] = {10, 20, 30};
int *ptr = arr + 5; // Out of bounds
Expected output:
Undefined behavior - accessing memory outside the array may cause crash or unexpected result*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr + 5;  // Points outside the array (invalid)
    printf("Undefined behavior: accessing memory outside the array may cause crash or unexpected result.\n");
}