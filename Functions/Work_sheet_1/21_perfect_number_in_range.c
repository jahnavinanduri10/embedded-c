#include <stdio.h>

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
    int n1,n2;
    printf("Enter the interval: ");
    scanf("%d %d",&n1,&n2);

    printf("The perfect numbers between %d to %d are: ",n1,n2);
    for(int i = n1;i <= n2;i++)
    {
        if(perfect(i))
            printf("%d ",i);
    }
}