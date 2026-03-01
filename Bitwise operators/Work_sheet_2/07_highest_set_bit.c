#include <stdio.h>

int highest_set_bit(unsigned int num)
{
    int pos = -1;

    while (num)
    {
        pos++;
        num >>= 1;
    }

    return pos;
}

int main()
{
    unsigned int num;
    printf("Enter num: ");
    scanf("%d",&num);

    printf("Highest set bit is at position %d\n",highest_set_bit(num));
}