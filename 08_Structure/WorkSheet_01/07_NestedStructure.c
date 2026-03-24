/*7. Nested Structures and Arrays within Structures
Goal
Explore how to organize complex data using nested structures and how to embed arrays inside structures for buffer management.
Activity
Log Session a structure with another structure as a member.
Log Session an array of structures to hold multiple sensor values.
Include arrays within a structure to buffer a set of samples.
Model a protocol layer with header and payload sub-structures.
Tip: Use typedef to simplify nested structure declarations.*/
#include <stdio.h>

typedef struct
{
    int day, month, year;
} date;

typedef struct
{
    int id;
    float value;
} sensor;

typedef struct
{
    int samples[5];
} buffer;

typedef struct
{
    int src, dest;
} header;

typedef struct
{
    header h;
    char data[5];
} packet;

typedef struct
{
    int id;
    date d;
} student;

int main()
{
    student s = {1,{8,3,2026}};
    printf("student id=%d\n",s.id);
    printf("date=%d-%d-%d\n",s.d.day,s.d.month,s.d.year);

    sensor sen[2] = {{1,10.5},{2,20.5}};
    for(int i=0;i<2;i++)
        printf("sensor %d value %.1f\n",sen[i].id,sen[i].value);

    buffer b = {{1,2,3,4,5}};
    printf("samples: ");
    for(int i=0;i<5;i++)
        printf("%d ",b.samples[i]);
    printf("\n");

    packet p = {{1,2},{'A','B','C','D','E'}};
    printf("src=%d dest=%d\n",p.h.src,p.h.dest);

    printf("payload: ");
    for(int i=0;i<5;i++)
        printf("%c ",p.data[i]);

    return 0;
}