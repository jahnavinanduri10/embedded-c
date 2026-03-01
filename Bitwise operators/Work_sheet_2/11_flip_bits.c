#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter num: ");
    scanf("%d",&num);
    printf("Flipped bits: %d\n",num ^ ((1 << 8) - 1));
}