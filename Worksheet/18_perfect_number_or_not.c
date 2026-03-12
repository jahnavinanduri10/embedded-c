#include <stdio.h>

int perfect(int num)
{
    int sum = 0,sum1;
    for(int i = 1;i < num;i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(perfect(num))
        printf("Perfect number");
    else
        printf("Not a perfect number");
}
