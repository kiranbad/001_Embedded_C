/*4. Function Pointers in Structures
Goal
Learn how to include and use function pointers inside structures for callback mechanisms and dynamic behavior in embedded systems.
Activity
Define a structure containing function pointers.
Initialize it with different functions and invoke them.
Use this setup to simulate a hardware driver interface with different behavior implementations.
Demonstrate dynamic assignment and execution of function pointers based on a condition or input.
Tip: Use typedef for cleaner function pointer declarations.*/

#include <stdio.h>

/* function pointer type */
typedef void (*func_ptr)();

/* structure with function pointers */
struct driver
{
    func_ptr init;
    func_ptr read;
    func_ptr write;
};

/* functions for device 1 */
void device1_init()
{
    printf("device1 init\n");
}

void device1_read()
{
    printf("device1 read\n");
}

void device1_write()
{
    printf("device1 write\n");
}

/* functions for device 2 */
void device2_init()
{
    printf("device2 init\n");
}

void device2_read()
{
    printf("device2 read\n");
}

void device2_write()
{
    printf("device2 write\n");
}

int main()
{
    struct driver drv;
    int choice;

    printf("enter device (1 or 2): ");
    scanf("%d",&choice);

    if(choice==1)
    {
        drv.init = device1_init;
        drv.read = device1_read;
        drv.write = device1_write;
    }
    else
    {
        drv.init = device2_init;
        drv.read = device2_read;
        drv.write = device2_write;
    }

    drv.init();
    drv.read();
    drv.write();

    return 0;
}