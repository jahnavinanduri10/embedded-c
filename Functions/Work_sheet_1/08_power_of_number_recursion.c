#include <stdio.h>

int power(int base,int expo)
{
    if(expo == 0)
        return 1;
    else
        return base * power(base,expo - 1);
}

int main()
{
    int base,expo;

    printf("Enter base and expo: ");
    scanf("%d %d",&base,&expo);

    printf("%d^%d = %d",base,expo,power(base,expo));
}