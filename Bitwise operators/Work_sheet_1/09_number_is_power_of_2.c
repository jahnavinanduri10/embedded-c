//Write a C program to check whether a number is a power of 2 using bitwise operations
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if((num & (num - 1)) == 0)
        printf("Number is power of 2");
    else
        printf("Number is not power of 2");
}