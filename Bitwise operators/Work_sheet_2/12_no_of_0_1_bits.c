#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int zeros = 0,ones = 0;

    for(int i = 0;i < 8;i++)
    {
        if(num & (1 << i))
            ones++;
        else zeros++;
    }

    printf("No of ones: %d\n",ones);
    printf("No of zeros: %d\n",zeros);
}