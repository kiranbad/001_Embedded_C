/*Exercise 16: Safe Memory Allocation Check
Goal: Practice error-checking after allocation.
Activity:
Try allocating a large chunk of memory (e.g., 1GB).
Check if the pointer is NULL.
If successful, print a success message.
If failed, handle the error gracefully.
Free if allocation succeeded.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t size = 1024 * 1024 * 1024; // 1 GB
    char *ptr = (char *)malloc(size);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
    } else {
        printf("Memory allocation successful!\n");
        free(ptr);
    }

    return 0;
}