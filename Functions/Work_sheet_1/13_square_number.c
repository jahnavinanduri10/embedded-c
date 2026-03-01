#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The square of %d is %d",n,square(n));
}