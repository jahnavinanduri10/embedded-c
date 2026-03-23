#include <stdio.h>

int power(int x,int n,int res)
{
    if(n!=0)
    {
        res += x;
        power(x,n-1,res);
    }
    return res;
}

int main()
{
    int x,n;
    int res = 0;
    printf("Enter x,n value: ");
    scanf("%d %d",&x,&n);
    printf("Result = %d\n",power(x,n,res));
}