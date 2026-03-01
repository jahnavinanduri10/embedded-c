// 1!/1 + 2!/2 + 3!/3 + 4!/4
#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1;i <= n;i++)
        fact *= i;
    return fact;
}

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
        int fact = factorial(i);
        sum = sum + (fact/i);
    }

    printf("The sum of the series is: %d",sum);
}