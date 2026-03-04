#include <stdio.h>
#include <math.h>

int binary_to_decimal(int n)
{
    int d = 0,i = 0,rem;
    while(n != 0)
    {
        rem = n % 10;
        d += rem * pow(2,i);
        n /= 10;
        i++;
    }
    return d;
}

int decimal_to_binary(int n)
{
    int b = 0, i = 1,rem;
    while(n != 0)
    {
        rem = n % 2;
        b += rem * i;
        n /= 2;
        i *= 10;
    }
    return b;
}

int main()
{
    int b1 = 1010;
    int d1 = 10;

    printf("Binary %d = Decimal %d\n",b1,binary_to_decimal(b1));
    printf("Decimal %d = Binary %d\n",d1,decimal_to_binary(d1));
}