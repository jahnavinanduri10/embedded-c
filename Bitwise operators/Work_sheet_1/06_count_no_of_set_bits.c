/*Write a C program to count the number of set bits in an unsigned integer.*/
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
}