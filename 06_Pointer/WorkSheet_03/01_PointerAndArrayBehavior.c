/*1. Pointer and Array Behavior
Goal: Analyze how pointers and arrays differ in memory referencing and sizeof operations in embedded systems.
Activity:
Declare an integer array with predefined elements:
1
int arr[5] = {10, 20, 30, 40, 50};
Declare an integer pointer and assign it to the array's base address:
1
int *ptr = arr;
Print the values of the array name, the pointer, and the address of the array.
Use 
sizeof() on the array and pointer and observe differences.
Access the elements via both array indexing and pointer arithmetic, and print them.*/
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;   // pointer pointing to first element of array

    printf("Array name address: %p\n", arr);
    printf("Pointer value: %p\n", ptr);
    printf("Address of array: %p\n", &arr);

    printf("Size of array: %lu\n", sizeof(arr));
    printf("Size of pointer: %lu\n", sizeof(ptr));

    printf("\nAccess using array indexing:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAccess using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}