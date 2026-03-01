#include <stdio.h>

int prime(int num)
{
    int flag = 0;
    for(int i = 2;i < num;i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(!flag)
        return 1;
    else
        return 0;
}

int main()
{
    int num1,num2;
    printf("Enter the limit: ");
    scanf("%d%d",&num1,&num2);

    printf("Prime Numbers: ");
    for(int i = num1;i <= num2;i++)
    {
        if(prime(i))
            printf("%d ",i);
    }
}