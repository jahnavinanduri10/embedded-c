#include <stdio.h>
#include <math.h>

int power(int a,int b)
{
    return pow(a,b);
}

int modulo(int a,int b)
{
    return a % b;
}
int squareroot(int a,int b)
{
    return sqrt(a);
}
int main()
{
    int (*farr[])(int,int) = {power,modulo,squareroot};
    int n;

    printf("1.Power\n2.Modulo\n3.SquareRoot\nEnter the choice: ");
    scanf("%d",&n);

    if(n == 1)
    {
        int base,expo;
        printf("Enter base,expo: ");
        scanf("%d%d",&base,&expo);
        printf("Result = %d\n",farr[0](base,expo));
    }
    else if(n == 2)
    {
        int a,b;
        printf("Enter a,b: ");
        scanf("%d%d",&a,&b);
        printf("Result = %d",farr[1](a,b));
    }

    else if(n == 3)
    {
        int x;
        printf("Enter a: ");
        scanf("%d",&x);
        printf("Result: %d\n",farr[2](x,2));
    }
    else printf("Invalid");
}