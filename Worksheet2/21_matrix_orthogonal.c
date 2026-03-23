#include <stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    
    int a[n][n], trans[n][n], prod[n][n];

    printf("Enter elements: ");
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            scanf("%d", &a[i][j]);
    }

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
            trans[j][i] = a[i][j];
     }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < n; k++)
                prod[i][j] += a[i][k] * trans[k][j];
        }
    }

     int is_orthogonal = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && prod[i][j] != 1)
                is_orthogonal = 0;
            if (i != j && prod[i][j] != 0)
                is_orthogonal = 0;
        }
    }

    if (is_orthogonal)
        printf("Yes, the matrix is orthogonal.\n");
    else
        printf("No, the matrix is not orthogonal.\n");
}