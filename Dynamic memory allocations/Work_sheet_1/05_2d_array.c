#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    printf("Rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];

    printf("Enter array elements: ");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Array elements: ");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}