#include <stdio.h>
#include <math.h>

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

int armstrong(int num)
{
    int count = 0, rem, temp = num, sum = 0;

    if (num < 0)    
        return 0;

    while (temp > 0)
    {
        rem = temp % 10;
        count++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += (int)pow(rem, count);   
        temp /= 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (prime(num) && armstrong(num))
        printf("%d is armstrong and prime\n", num);   
    else if (prime(num) && !(armstrong(num)))
        printf("%d is prime not an armstrong\n", num);
    else if (armstrong(num) && !(prime(num)))
        printf("%d is not prime and an armstrong\n", num);
    else
        printf("%d is not an armstrong and not prime\n", num);

    return 0;
}