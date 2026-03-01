#include <stdio.h>
#include <math.h>

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

int perfect(int num)
{
    int sum = 0,sum1;
    for(int i = 1;i < num;i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    sum1 = (sum + num) / 2;
    if(sum == num && sum1 == num)
        return 1;
    else
        return 0;
   
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("%d is an armstrong number",n);
    else
        printf("%d is not armstrong number",n);
    
    if(perfect(n))
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
}