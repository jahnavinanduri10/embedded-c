#include <stdio.h>

int count_zeros(int n)
{
    if(n == 0)
        return 0;
    if(n % 10 == 0)
        return 1 + count_zeros(n / 10);
    else return count_zeros(n / 10);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("No of zeroes = %d\n",count_zeros(num));
}