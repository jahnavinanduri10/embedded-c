#include <stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    int num = 1;
    for(int i = 0;i < n;i++)
    {
        int temp[100],count = 0;
        for(int j = 0;j <= i;j++)
            temp[count++] = num++;
        
            if(i % 2 != 0)
            {
                for(int k = count - 1;k >= 0;k--)
                    printf("%d ",temp[k]);
            }
            else
            {
                for(int k = 0;k < count;k++)
                    printf("%d ",temp[k]);
            }
        printf("\n");
    }
}