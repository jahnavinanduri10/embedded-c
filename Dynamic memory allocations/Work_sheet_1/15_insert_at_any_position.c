#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, newVal, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &newVal);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position\n");
        free(arr);
        return 1;
    }

    arr = (int *)realloc(arr, (n + 1) * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = newVal;

    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}