/*Write a program to modify specific portions of a given integer:
Set all bits in the Least Significant Byte (LSB) to 1
Set all bits in the Most Significant Byte (MSB) to 1
Set all bits in the Least Significant Nibble to 1
Set all bits in the Most Significant Nibble to 1
Set n bits to 1 (user input)
Clear n bits (set to 0), with n as input
Toggle n bits (user input)*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("After setting all least significant byte to 1: %d\n",(num | 0xFF));

    printf("After setting all most significant byte to 1: %d\n",(num | (0xFF << 24)));

    printf("After setting all bits in the least significant nibble to 1: %d\n",(num | 0x0F));

    printf("After setting all bits in the most significant nibble to 1: %d\n",(num | (0x0F << 24)));

    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    printf("After setting %d bits to 1: %d\n",n,(num | ((1 << n) - 1)));
    printf("After clearing %d bits to 0: %d\n",n,(num & (~(1 << n) - 1)));
    printf("After toggling %d bits: %d\n",n,(num ^ ((1 << n) - 1)));

}