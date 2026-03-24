/*3. Working with Const and Volatile Pointers
Goal: Demonstrate how const and volatile qualifiers affect pointer behavior in hardware register access.
Activity:
Define a dummy hardware register address using 
1
#define REG_BASE 0x40000000
#define :
Declare pointers with different qualifiers:
1.volatile uint32_t *reg_modifiable = (uint32_t *)REG_BASE;
2.const uint32_t *reg_readonly = (const uint32_t *)REG_BASE;
3.const volatile uint32_t *reg_const_volatile = (const volatile uint32_t *)REG_BASE;
Attempt to write to and read from each pointer and note compiler behavior.*/
#include <stdio.h>
#include <stdint.h>

#define REG_BASE 0x40000000

int main()
{
    volatile uint32_t *reg_modifiable = (uint32_t *)REG_BASE;
    const uint32_t *reg_readonly = (const uint32_t *)REG_BASE;
    const volatile uint32_t *reg_const_volatile = (const volatile uint32_t *)REG_BASE;

    /* Writing to modifiable register */
    //*reg_modifiable = 10;

    /* Reading values */
    printf("Value from modifiable register: %u\n", *reg_modifiable);
    printf("Value from readonly register: %u\n", *reg_readonly);
    printf("Value from const volatile register: %u\n", *reg_const_volatile);

    /* This line will cause compiler error because pointer is const */
    /* *reg_readonly = 20; */

    /* This also causes error */
    /* *reg_const_volatile = 30; */

    return 0;
}