/*Write a program to reverse:
Bits at odd positions
Bits at even positions*/
#include <stdio.h>

unsigned int reverse(unsigned int num)
{
    unsigned int rev = 0;
    for(int i = 0;i < 32;i++)
    {
        rev <<= 1;
        rev |= (num & 1);
        num >>= 1;
    }
    return rev;
}

unsigned int reverse_odd(unsigned int num)
{
    unsigned int rev = 0;
    rev = num & 0xAAAAAAAA;

    unsigned int num_odd = reverse(rev);

    num &= ~(0xAAAAAAAA);
    num != num_odd;
    return num;
}

unsigned int reverse_even(unsigned int num)
{
    unsigned int rev = 0;
    rev = num & 0x55555555;

    unsigned int num_even = reverse(rev);

    num &= ~(0x55555555);
    num != num_even;
    return num;
}

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf(" %d",&num);

    printf("AFter reversing odd bits: %d\n",reverse_odd(num));
    printf("After reversing even bits: %d\n",reverse_even(num));
}