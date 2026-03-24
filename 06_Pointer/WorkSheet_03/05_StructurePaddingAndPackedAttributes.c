/*5. Structure Padding and Packed Attributes
Goal: Analyze memory layout and size differences of structs with and without packing for peripheral registers.
Activity:
Define a structure containing  
struct PeripheralRegs {
  char status;
  int control;
  short error;
};
int , and 
short fields:
Print the total size of the structure and the offsets of each member using 
Redefine the structure with 
offsetof() .
__attribute__((packed)) and compare sizes and offsets.*/
#include <stdio.h>
#include <stddef.h>

struct PeripheralRegs
{
    char status;
    int control;
    short error;
};

struct __attribute__((packed)) PackedPeripheralRegs
{
    char status;
    int control;
    short error;
};

int main()
{
    printf("Normal Structure:\n");
    printf("Size: %lu\n", sizeof(struct PeripheralRegs));
    printf("status offset: %lu\n", offsetof(struct PeripheralRegs, status));
    printf("control offset: %lu\n", offsetof(struct PeripheralRegs, control));
    printf("error offset: %lu\n", offsetof(struct PeripheralRegs, error));

    printf("\nPacked Structure:\n");
    printf("Size: %lu\n", sizeof(struct PackedPeripheralRegs));
    printf("status offset: %lu\n", offsetof(struct PackedPeripheralRegs, status));
    printf("control offset: %lu\n", offsetof(struct PackedPeripheralRegs, control));
    printf("error offset: %lu\n", offsetof(struct PackedPeripheralRegs, error));

    return 0;
}