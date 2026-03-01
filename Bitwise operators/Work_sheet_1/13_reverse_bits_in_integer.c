//Write a program to reverse all bits in an integer.

#include <stdio.h>
void reverse(unsigned int num)
{
    unsigned int rev = 0;
    for(int i = 0;i < 32;i++)
    {
        rev <<= 1;
        rev |= (num & 1);
        num >>= 1;
    }
    printf("Reversed number: %d",rev);
}

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    reverse(num);
}