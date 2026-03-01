#include <stdio.h>

int prime(int num)
{
    int flag = 0;

    if (num <= 1)  
        return 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (!flag)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(prime(n))
        printf("Prime number");
    else    
        printf("Not a prime number");
}