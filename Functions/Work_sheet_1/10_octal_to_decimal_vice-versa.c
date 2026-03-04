#include <stdio.h>
#include <math.h>

int octal_to_decimal(int n)
{
    int d = 0,i = 0,rem;
    while(n != 0)
    {
        rem = n % 10;
        d += rem * pow(8,i);
        n /= 10;
        i++;
    }
    return d;
}

int decimal_to_octal(int n)
{
    int b = 0, i = 1,rem;
    while(n != 0)
    {
        rem = n % 8;
        b += rem * i;
        n /= 8;
        i *= 10;
    }
    return b;
}

int main()
{
    int o1 = 17;
    int d1 = 15;

    printf("Octal %d = Decimal %d\n",o1,octal_to_decimal(o1));
    printf("Decimal %d = Octal %d\n",d1,decimal_to_octal(d1));
}