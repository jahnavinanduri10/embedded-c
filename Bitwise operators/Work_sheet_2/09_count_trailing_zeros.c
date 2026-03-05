#include <stdio.h>

int count_trailing_zeros(unsigned int n)
{
    if (n == 0)
        return -1;   

    int count = 0;

    while ((n & 1) == 0)
    {
        count++;
        n >>= 1;
    }

    return count;
}

int main()
{
    unsigned int n = 40; 
    printf("Trailing zeros: %d\n", count_trailing_zeros(n));
    return 0;
}