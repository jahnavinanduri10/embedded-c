#include <stdio.h> 
int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    for(int i = 1;i <= n; i++)
    {
        for(int j = 1; j < 2*n;j++)
        {
        if(j <= n && i == j)
            printf("%d",i);
        if(j > n && i+j == 2*n)
            printf("%d",j);
        else
            printf(" ");
        }
        printf("\n");
    }
}