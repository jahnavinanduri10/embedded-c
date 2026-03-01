#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);

    printf("The total is: %d",add(a,b));
}