#include <stdio.h>

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
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    printf("Binary value is %d\n",decimal_to_binary(decimal));
}
