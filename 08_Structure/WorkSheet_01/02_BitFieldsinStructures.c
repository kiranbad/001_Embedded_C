/*2. Bit-fields in Structures
Goal
Learn to define and use bit-fields to manage individual bits for hardware register simulation.
Activity
Log Session a structure using bit-fields to represent an 8-bit status register.
Assign values to specific flags.
Log Session a mock register with error, ready, and mode bits.
Write code to toggle specific flags without using bitwise operators.
Reflect on how compilers handle ordering and alignment of bit-fields.
Tip: Bit-fields may behave differently on different compilers—don't assume portability.*/
#include <stdio.h>
struct StatusRegister
{
    unsigned int ready : 1;      // bit 0
    unsigned int error : 1;      // bit 1
    unsigned int mode  : 2;      // bit 2-3
    unsigned int reserved : 4;   // bit 4-7
};

/* Union to visualize the register as a byte */
union RegisterView
{
    struct StatusRegister bits;
    unsigned char byte;
};

int main()
{
    union RegisterView reg;

    /* Initialize register */
    reg.byte = 0;

    printf("Size of structure: %lu bytes\n", sizeof(reg.bits));
    printf("Initial register value: 0x%X\n\n", reg.byte);

    /* Assign values to specific flags */
    reg.bits.ready = 1;
    reg.bits.error = 0;
    reg.bits.mode = 2;

    printf("After assigning values:\n");
    printf("Ready : %u\n", reg.bits.ready);
    printf("Error : %u\n", reg.bits.error);
    printf("Mode  : %u\n", reg.bits.mode);
    printf("Register byte: 0x%X\n\n", reg.byte);

    /* Toggle flags without bitwise operators */
    reg.bits.ready = !reg.bits.ready;
    reg.bits.error = !reg.bits.error;

    printf("After toggling flags:\n");
    printf("Ready : %u\n", reg.bits.ready);
    printf("Error : %u\n", reg.bits.error);
    printf("Mode  : %u\n", reg.bits.mode);
    printf("Register byte: 0x%X\n\n", reg.byte);

    /* Simulate mock register change */
    reg.bits.mode = 3;

    printf("After changing mode:\n");
    printf("Ready : %u\n", reg.bits.ready);
    printf("Error : %u\n", reg.bits.error);
    printf("Mode  : %u\n", reg.bits.mode);
}