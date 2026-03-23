#include <stdio.h>

int GCD(int a,int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int LCM(int a,int b)
{
    return (a*b)/GCD(a,b);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("LCM = %d\n",LCM(a,b));
    printf("GCD = %d\n",GCD(a,b));
}