//Write a program to determine the size (in bits) of an integer using bit shifts.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int count = 0;

    while(num != 0)
    {
        num <<= 1;
        count++;
    }

    printf("Size of the integer: %d\n",count);
}