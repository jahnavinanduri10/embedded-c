#include <stdio.h>

void transpose(int *src, int *dest, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            *(dest + j * rows + i) = *(src + i * cols + j);
}

void print_matrix(int *mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", *(mat + i * cols + j));
        printf("\n");
    }
}

int main()
{
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int trans[3][2];

    int *ptr = &mat[0][0];

    printf("Original matrix:\n");
    print_matrix(ptr, 2, 3);

    transpose(ptr, &trans[0][0], 2, 3);

    printf("\nTransposed matrix:\n");
    print_matrix(&trans[0][0], 3, 2);

    printf("\nIterating using pointer arithmetic:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            printf("Element [%d][%d] = %d\n", i, j, *(ptr + i * 3 + j));

    return 0;
}