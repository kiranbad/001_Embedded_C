/*3. Structure Padding, Alignment, and Packing
Goal
Understand how padding affects structure size and how to control layout using packing directives.
Activity
Log Session a structure with mixed data types (char, int, short).
Check the size and member offsets using sizeof() and pointer arithmetic.
Reorder members to reduce padding and observe the change in size.
Use #pragma pack(1) and compare memory layout.
Simulate a communication packet where field alignment matters.
Tip: Use offsetof() macro to determine the byte offset of each field.*/
#include <stdio.h>
#include <stddef.h>

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

#pragma pack(1)
struct packet
{
    char header;
    short id;
    int length;
    char data;
};
#pragma pack()

int main()
{
    printf("size of data1 = %lu\n", sizeof(struct data1));
    printf("offset a = %lu\n", offsetof(struct data1,a));
    printf("offset b = %lu\n", offsetof(struct data1,b));
    printf("offset c = %lu\n", offsetof(struct data1,c));

    printf("\nsize of data2 = %lu\n", sizeof(struct data2));
    printf("offset b = %lu\n", offsetof(struct data2,b));
    printf("offset c = %lu\n", offsetof(struct data2,c));
    printf("offset a = %lu\n", offsetof(struct data2,a));

    printf("\nsize of packed_data = %lu\n", sizeof(struct packed_data));
    printf("offset a = %lu\n", offsetof(struct packed_data,a));
    printf("offset b = %lu\n", offsetof(struct packed_data,b));
    printf("offset c = %lu\n", offsetof(struct packed_data,c));

    struct packet p = {'H',10,100,'A'};

    printf("\npacket size = %lu\n", sizeof(p));
    printf("header = %c\n", p.header);
    printf("id = %d\n", p.id);
    printf("length = %d\n", p.length);
    printf("data = %c\n", p.data);

}