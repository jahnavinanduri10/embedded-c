#include <stdio.h>
#include <stdint.h>

#define REG_BASE 0x40000000

int main()
{
    volatile uint32_t *reg_modifiable = (uint32_t *)REG_BASE;
    const uint32_t *reg_readonly = (const uint32_t *)REG_BASE;
    const volatile uint32_t *reg_const_volatile = (const volatile uint32_t *)REG_BASE;

    uint32_t val1 = *reg_modifiable;
    uint32_t val2 = *reg_readonly;
    uint32_t val3 = *reg_const_volatile;
    printf("Read values: %u, %u, %u\n", val1, val2, val3);

    *reg_modifiable = 0x1234;
    //*reg_readonly = 0x4567;
    //*reg_const_volatile = 0x7890;
}