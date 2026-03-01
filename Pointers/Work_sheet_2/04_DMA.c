#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        arr[i] = (i + 1) * 10;

    printf("After malloc:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int *temp = realloc(arr, 8 * sizeof(int));
    if (temp == NULL)
    {
        printf("realloc failed\n");
        free(arr);
        return 1;
    }
    arr = temp;

    for (int i = 5; i < 8; i++)
        arr[i] = (i + 1) * 10;

    printf("After realloc (expanded):\n");
    for (int i = 0; i < 8; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int *carr = calloc(4, sizeof(int));
    if (carr == NULL)
    {
        printf("calloc failed\n");
        free(arr);
        return 1;
    }

    printf("After calloc:\n");
    for (int i = 0; i < 4; i++)
        printf("%d ", carr[i]);
    printf("\n");

    free(arr);
    free(carr);

    return 0;
}