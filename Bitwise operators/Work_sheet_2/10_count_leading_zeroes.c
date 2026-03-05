#include <stdio.h>

int count_leading_zeros(unsigned int n)
{
    if (n == 0)
        return 32;   

    int count = 0;
    unsigned int mask = 1 << 31;

    while ((n & mask) == 0)
    {
        count++;
        mask >>= 1;
    }

    return count;
}

int main()
{
    unsigned int n = 8; 
    printf("Leading zeros: %d\n", count_leading_zeros(n));
    return 0;
}