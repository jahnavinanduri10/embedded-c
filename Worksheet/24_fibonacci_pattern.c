#include <stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    int a=1,b=1,c;
    printf("1\n1 2\n");
    b = 2, a=1;
    for(int i = 2;i < n;i++)
    {
        for(int j = 0;j <= i;j++)
        {
            c = a + b;
            printf("%d ",c);
            a = b, b = c;
        }
        printf("\n");
    }
}