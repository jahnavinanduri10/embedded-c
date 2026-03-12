#include <stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    if(n > 2)
    {
        int a = 1,b = 1,c;
        for(int i = 3;i <= n;i++)
        {
            c = a+b;
            a = b;
            b = c;
        }

        printf("%dth term is %d\n",n,c);
    }
    else if(n == 1 || n == 2)
        printf("%dth term is 1\n",n);
    else
        printf("Invalid n value\n");
}