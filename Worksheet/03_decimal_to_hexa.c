#include <stdio.h>

int decimal_to_hexa(int n)
{
    int b = 0, i = 1,rem;
    while(n != 0)
    {
        rem = n % 16;
        b += rem * i;
        n /= 16;
        i *= 10;
    }
    return b;
}

int main()
{
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d",&dec);

    printf("Hexadecimal: 0x%x",decimal_to_hexa(dec));
}