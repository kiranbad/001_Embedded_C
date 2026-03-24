/*Question 2: Pointer Addition
Task: Using the same array, print the last element by adding an integer to the pointer.
Sample data:
1
int arr[] = {5, 10, 15, 20, 25};
Expected output:
Last element is 25*/

#include<stdio.h>
int main()
{
    int arr[]={5, 10, 15, 20, 25};
    printf("%d",*(arr+4));
}