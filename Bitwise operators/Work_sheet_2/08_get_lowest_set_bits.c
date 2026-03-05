#include <stdio.h>

int lowest_set_bit_position(unsigned int n)
{
    if (n == 0)
        return 0;  

    int position = 1;

    while ((n & 1) == 0)
    {
        n >>= 1;
        position++;
    }

    return position;
}

int main()
{
    unsigned int n = 18;  
    printf("Lowest set bit position: %d\n", lowest_set_bit_position(n));
    return 0;
}