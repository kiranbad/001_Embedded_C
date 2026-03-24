/*Question 6: Invalid Pointer Arithmetic
Task: Explain why the following code snippet is invalid and what would happen if you try to compile/run it:
1
2
3
4
int arr[5];
int *p1 = &arr[1];
int *p2 = &arr[3];
int *p3 = p1 + p2; // Invalid operation
Expected output:
Error: Cannot add two pointers in C. Pointer addition is not defined*/

#include <stdio.h>

int main() {
    int arr[5];
    int *p1 = &arr[1];
    int *p2 = &arr[3];
   // int *p3 = p1 + p2; Invalid operation
    printf("Error: Cannot add two pointers in C. Pointer addition is not defined.\n");

    return 0;
}