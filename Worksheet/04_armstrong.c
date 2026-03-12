#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    if(n < 0)
        return 0;
    int temp = n,rem,sum = 0;
    int count = 0;
    while(temp != 0)
    {
        rem = temp % 10;
        count++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum += (int)pow(rem,count);
        temp /= 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;

}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(armstrong(num))
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
}