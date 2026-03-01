//Given two integers A and B, write a program to count the number of bits that need to be flipped to convert A into B.

#include <stdio.h>
void count_bits(int a,int b)
{
    int c = a ^ b;
    int count = 0;

    for(int i = 0;i < 32;i++)
    {
        if(c &(1 << i))
            count++;
    }
    printf("No of bits to be flipped: %d\n",count);
}
int main()
{
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    count_bits(num1,num2);
}