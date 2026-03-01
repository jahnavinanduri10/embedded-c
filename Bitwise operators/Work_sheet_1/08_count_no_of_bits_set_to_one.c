//Write a C program to count the number of bits set to 1 in an integer. Also compare different methods. Additionally, check if the 20th bit of a 32-bit integer is set.

#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int count = 0;

    for(int i = 0;i < 32;i++)
    {
        if(num & (1 << i))
            count++;
    }

    printf("No of set bits: %d\n",count);
    if(num & (1 << 20))
        printf("20th bit is set");
    else
        printf("20th bit is not set");
}