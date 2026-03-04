#include <stdio.h>
#include <math.h>

int binary_to_octal(int n)
{
    int octal = 0,decimal = 0,i = 0,rem;

    //binary to decimal
    while(n != 0)
    {
        rem = n % 10;
        decimal += rem * pow(2,i);
        n /= 10;
        i++;
    }
    //decimal to octal
    i = 1;
    while(decimal != 0)
    {
        rem = decimal % 8;
        octal += rem * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

int octal_to_binary(int n)
{
    int decimal = 0,binary = 0,i = 1;

    while(n != 0)
    {
        decimal += (n % 10) * pow(8,i-1);
        n /= 10;
        i++;
    }

    i = 1;
    while(decimal != 0)
    {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}
int main()
{
    int b1 = 110011;
    int o1 = 63;

    printf("Binary %d,Octal %d\n",b1,binary_to_octal(b1));
    printf("Octal %d,binary %d\n",o1,octal_to_binary(o1));
}