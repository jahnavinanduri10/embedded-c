/*Write a program to check bit status in an integer:
Check if LSB is set (1) or not (0)
Check if MSB is set (1) or not (0)
Check if the nth bit is set (1) or not (0) (user input)*/

#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num & 1)
        printf("LSB is set\n");
    else printf("LSB is not set\n");

    if(num & (1 << 31))
        printf("MSB is set\n");
    else printf("MSB is not set\n");

    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    if(num & (1 << n))
        printf("%dth bit set\n",n);
    else printf("%dth bit not set\n",n);
}