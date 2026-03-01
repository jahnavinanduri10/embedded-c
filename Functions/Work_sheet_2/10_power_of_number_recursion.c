#include <stdio.h>

int power(int base,int exp)
{
    if(exp == 0)
        return 1;
    return base * power(base,exp-1);
}

int main()
{
    int base,expo;
    printf("Enter base,exponent: ");
    scanf("%d %d",&base,&expo);

    printf("%d ^ %d = %d",base,expo,power(base,expo));
}