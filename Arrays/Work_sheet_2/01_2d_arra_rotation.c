#include <stdio.h>
#include <stdlib.h>
void rotation(int *arr[],int r,int c,int n)
{
   int rotation = n % 4;
    if(rotation == 1)
    {
        for(int i = 0;i < c;i++)
        {
            for(int j = 0;j < r;j++)
                printf("%d ",*(*(arr+j)+i));
            printf("\n");
        }
    }

    else if(rotation == 2)
    {
        for(int i = r-1;i >= 0;i--)
        {
            for(int j = c-1; j >= 0;j--)
                printf("%d ",*(*(arr+i)+j));
            printf("\n");
        }
    }

   else if(rotation == 3)
   {
    for(int i = c - 1; i >= 0; i--)
    {
        for(int j = 0; j < r; j++)
            printf("%d ", *(*(arr + j) + i));
        printf("\n");
    }
    }
    else
    {
        for(int i = 0;i < r;i++)
        {
            for(int j = 0;j < c;j++)
                printf("%d ",*(*(arr+i)+j));
            printf("\n");
        }
    }
}

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int *arr[r];

    for(int i = 0;i < r;i++)
        arr[i] = malloc(sizeof(int) * c);

    printf("Enter elements: ");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
            scanf("%d ",&arr[i][j]);
    }

    int n;
    scanf("%d",&n);
    printf("\n");
    rotation(arr,r,c,n);

    for(int i = 0;i < r;i++)
    {
        free(arr[i]);
    }
}






    //  if(n > 0)
    // {
    //     if(r != c)// not a square matrix
    //     {
    //         int *b[r];
    //         for(int i = 0;i < c;i++)
    //             b[i] = malloc(sizeof(int) * r); 
                
    //         for(int i = 0;i < c;i++)
    //         {
    //             for(int j = 0;j < r;j++)
    //                 *(*(b+i)+j) = *(*(arr+j)+i);
    //         }

    //     }
    //     else
    //     {
    //         int *b[c];
    //         for(int i = 0;i < c;i++)
    //             b[i] = malloc(sizeof(int) * r);

    //         for(int i = 0;i < c;i++)
    //         {
    //             for(int j = 0;j < r;j++)
    //                 *(*(b+i)+j) = *(*(arr+j)+i);
    //         }
    //     }

    //     rotation(arr,r,c,n-1);
    // }