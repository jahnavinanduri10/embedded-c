#include <stdio.h>
#include <stdlib.h>

void allocate_memory(int **ptr, int size)
{
    *ptr = (int *)malloc(size * sizeof(int));

    if (*ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    for (int i = 0; i < size; i++)
        (*ptr)[i] = (i + 1) * 10;
}

int main()
{
    int *p = NULL;     
    int **pp = &p;     

    int n = 5;
    allocate_memory(pp, n);

    printf("Accessing elements using double pointer:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", (*pp)[i]);

    (*pp)[2] = 999;

    printf("\nAfter modification:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);

    free(p);

    return 0;
}