#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int **arr;

    printf("Enter number of integers: ");
    scanf("%d", &count);

    arr = (int **)malloc(count * sizeof(int *));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        arr[i] = (int *)malloc(sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory allocation failed at index %d\n", i);

            for (int j = 0; j < i; j++)
                free(arr[j]);
            free(arr);
            return 1;
        }
    }
    printf("Enter %d integer values:\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", arr[i]);   
    }

    printf("Stored values:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Value %d: %d\n", i + 1, *arr[i]);
    }

    for (int i = 0; i < count; i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}