/*NULL Pointer Safety
Goal: Learn to avoid dereferencing NULL pointers.
Activity:
Declare: int *p = NULL;
Use a condition if (p != NULL) before dereferencing.
Later, assign p = &a; and access safely.*/
#include <stdio.h>

int main() {
    int a = 10;
    int *p = NULL;
    if (p != NULL) {
        printf("Value pointed by p: %d\n", *p);
    } else {
        printf("p is NULL, cannot dereference\n");
    }
    p = &a;
    if (p != NULL) {
        printf("Value pointed by p: %d\n", *p);
    }

}