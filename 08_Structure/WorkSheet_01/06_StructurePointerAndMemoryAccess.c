/*6. Structure Pointers and Memory Access
Goal
Understand the use of pointers to structures for efficient memory access and how to use the arrow operator for member access.
Activity
Declare a pointer to a structure and allocate memory using malloc().
Use arrow operator to assign and print structure member values.
Simulate memory-mapped peripheral access using structure pointers.
Illustrate how structure pointers simplify code in register programming.
Tip: Always initialize structure pointers and check for NULL before dereferencing.*/
#include <stdio.h>
#include <stdlib.h>

/* structure for dynamic allocation example */
struct student
{
    int id;
    float marks;
};

/* structure to simulate hardware registers */
struct gpio
{
    unsigned int dir;
    unsigned int data;
    unsigned int status;
};

int main()
{
    struct student *s;

    s = (struct student *)malloc(sizeof(struct student));

    if(s == NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    s->id = 101;
    s->marks = 88.5;

    printf("id = %d\n", s->id);
    printf("marks = %.2f\n", s->marks);

    free(s);


    /* simulate memory mapped peripheral */

    struct gpio portA = {0};
    struct gpio *gpio_ptr;

    gpio_ptr = &portA;

    gpio_ptr->dir = 0xFF;
    gpio_ptr->data = 0xAA;
    gpio_ptr->status = 1;

    printf("\nGPIO registers\n");
    printf("dir = %u\n", gpio_ptr->dir);
    printf("data = %u\n", gpio_ptr->data);
    printf("status = %u\n", gpio_ptr->status);

    return 0;
}