/*Question 3: Pointer Subtraction
Task: Given two pointers pointing to elements of an integer array, find the distance (number of elements) between them.
Sample data:
1
2
3
int arr[] = {2, 4, 6, 8, 10};
int *p1 = &arr[4];  // points to 10
int *p2 = &arr[1];  // points to 4
Expected output:
Distance between pointers is 3*/

#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int *p1 = &arr[4]; // points to 10
    int *p2 = &arr[1]; // points to 4
    printf("%ld",(p1-p2));
}