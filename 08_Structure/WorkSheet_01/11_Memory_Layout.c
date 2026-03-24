/*11. Memory Layout of Structures
Goal
Analyze the internal memory layout of structures, including padding, alignment, and impact on memory optimization.
Activity
Define a structure and use sizeof() to observe unexpected sizes.
Use different data type orderings and compare structure size.
Simulate structure layout for peripheral memory mapping.
Apply structure packing using #pragma and compare memory efficiency.
Tip: Misaligned structures can cause performance hits on some architectures*/
#include <stdio.h>

struct data1
{
    char a;
    int b;
    short c;
};

struct data2
{
    int b;
    short c;
    char a;
};

#pragma pack(1)
struct packed_data
{
    char a;
    int b;
    short c;
};
#pragma pack()

struct gpio
{
    unsigned int dir;
    unsigned int data;
    unsigned int status;
};

int main()
{
    printf("size of data1 = %lu\n", sizeof(struct data1));
    printf("size of data2 = %lu\n", sizeof(struct data2));
    printf("size of packed_data = %lu\n", sizeof(struct packed_data));

    struct gpio port;

    port.dir = 1;
    port.data = 255;
    port.status = 0;

    printf("gpio dir=%u\n", port.dir);
    printf("gpio data=%u\n", port.data);
    printf("gpio status=%u\n", port.status);

    return 0;
}