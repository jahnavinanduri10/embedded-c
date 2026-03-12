#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];

    printf("Enter matrix elements: \n");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
            scanf("%d",&arr[i][j]);
    }

    printf("Boudary elements: \n");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            if(i == 0 || j == 0 || i == r-1 || j == c-1)
                printf("%d ",arr[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}