/*Question 4: Pointer Comparison
Task: Write code to compare two pointers to elements in an array and print which one points to the element with a smaller index.
Sample data:
1
2
3
int arr[] = {11, 22, 33, 44, 55};
int *ptr1 = &arr[2];  // points to 33
int *ptr2 = &arr[4];  // points to 55
Expected output: Pointer ptr1 points to an earlier element than ptr2*/
#include <stdio.h>
int main()
{
    int arr[] = {11, 22, 33, 44, 55};
    int *ptr1 = &arr[2]; 
    int *ptr2 = &arr[4];
    if(ptr1<ptr2)
    printf("Pointer ptr1 points to an earlier element than ptr2\n");

}