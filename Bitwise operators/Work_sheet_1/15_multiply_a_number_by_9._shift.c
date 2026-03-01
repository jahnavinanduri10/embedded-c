//Write a program to multiply a number by 9 using bitwise shift operations.

#include <stdio.h>

int mutliply_by_9(int num)
{
    return (num << 3) + num;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("9 * %d = %d\n",num,mutliply_by_9(num));
}