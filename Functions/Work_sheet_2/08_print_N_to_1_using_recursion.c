#include <stdio.h>

void print(int n)
{
    if(n >= 1)
    {
        printf("%d ",n);
        print(n-1);
    }
}

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    print(n);
}