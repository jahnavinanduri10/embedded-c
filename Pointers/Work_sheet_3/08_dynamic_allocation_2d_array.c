#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int rows = 4,cols = 4;
    uint32_t **reg_block;
    reg_block = malloc(rows * sizeof(uint32_t *));
    for (int i = 0; i < rows; i++)
        reg_block[i] = malloc(cols * sizeof(uint32_t));
    for(int i = 0;i < rows;i++)
    {
        for(int j = 0;j < cols;j++)
        {
            scanf("%d",&reg_block[i][j]);
        }
    }

    printf("Array elements: \n");
    for(int i = 0;i < rows;i++)
    {
        for(int j = 0;j < cols;j++)
            printf("%d ",*(*(reg_block + i)+j));
        printf("\n");
    }

}