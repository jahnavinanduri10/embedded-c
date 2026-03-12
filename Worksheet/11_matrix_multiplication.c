#include <stdio.h>

int main()
{
    int r1,c1,r2,c2;
    printf("Enter rows and columns for matrix1: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns for matrix2: ");
    scanf(" %d%d",&r2,&c2);
    if(c1 != r2)
    {
        printf("Multiplication not possible");
        return 0;
    }

    int a[r1][c1],b[r2][c2];

    printf("Enter matrix1 elements: ");
    for(int i = 0;i < r1;i++)
    {
        for(int j = 0;j < c1;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter matrix2 elements: ");
    for(int i = 0;i < r2;i++)
    {
        for(int j = 0;j < c2;j++)
            scanf("%d",&b[i][j]);
    }

    int c[r1][c2];

    for(int i = 0;i < r1;i++)
    {
        for(int j = 0;j < c2;j++)
        {
            c[i][j] = 0;
            for(int k = 0;k < c1;k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Result:\n");
    for(int i = 0;i < r1;i++)
    {
        for(int j = 0;j < c2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}