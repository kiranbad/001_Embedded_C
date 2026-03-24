/*10. Pointer Arithmetic on Struct Arrays
Goal: Access and modify an array of peripheral register structs using pointer arithmetic.
Activity:
Define a struct representing peripheral registers:
struct Peripheral {
  uint8_t status;
  uint8_t control;
  uint16_t data;
};
Declare an array of 5 such structs.
Use a pointer to traverse and modify the array elements using pointer arithmetic.*/
#include <stdio.h>
#include <stdint.h>

struct Peripheral
{
    uint8_t status;
    uint8_t control;
    uint16_t data;
};

int main()
{
    struct Peripheral regs[5];
    struct Peripheral *p = regs;

    for(int i = 0; i < 5; i++)
    {
        (p+i)->status = i;
        (p+i)->control = i + 10;
        (p+i)->data = i * 100;
    }

    printf("Peripheral register values:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("status=%u control=%u data=%u\n",
               (p+i)->status,
               (p+i)->control,
               (p+i)->data);
    }

    return 0;
}