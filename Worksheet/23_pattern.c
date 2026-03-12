#include <stdio.h>

int main()
{
    int n = 5;

        for(int i = 0;i < 2*n-1;i++)
        {
            for(int j = 0;j < n;j++)
            {
                if(i == j || i+j == 2*n-2 || (i+j == n+1 && i > j) || (i+j == n-1 && i > j) || (i % 2 == 0 && j == 0))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    
}