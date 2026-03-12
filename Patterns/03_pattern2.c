#include <stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    int count = 1;
    for(int i = 1;i <= n;i++)
    {
        if(i%2 == 0)
            count = 2;
        else
            count = 1;
        for(int j = 1;j <= i;j++)
        {
            if(i % 2 == 0)
            {
                if(count % 2 == 0)
                    printf("%d ",count);
            }
            else
            {
                if(count % 2 != 0)
                    printf("%d ",count);
            }
            count += 2;
        }
        printf("\n");
    }
}