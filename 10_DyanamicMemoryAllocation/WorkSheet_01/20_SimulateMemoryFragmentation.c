/*Exercise 20: Simulate Memory Fragmentation
Goal: Understand fragmentation with sequential malloc and free.
Activity:
Allocate multiple memory blocks of varying sizes.
Free some in between.
Allocate a new block that fits only in fragmented space.
Observe behavior.
Free all at the end.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(10 * sizeof(int));
    int *b = malloc(20 * sizeof(int));
    int *c = malloc(30 * sizeof(int));

    free(b);  // Free middle block to create fragmentation

    int *d = malloc(15 * sizeof(int));  // Allocated after b is freed

    printf("Addresses:\n");
    printf("a = %p\n", a);
    printf("b = %p\n", b);
    printf("c = %p\n", c);
    printf("d = %p\n", d);

    free(a);
    free(c);
    free(d);

    return 0;
}