#include <stdio.h>

int sum_of_digits(int n,int sum)
{
    if(n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
        return sum_of_digits(n,sum);
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Sum of digits: %d",sum_of_digits(num,0));
}