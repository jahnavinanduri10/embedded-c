#include <stdio.h>
#include <stdlib.h>

struct Data
{
    int value;
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void modify_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] *= 2;
}

void update_structure(struct Data *d)
{
    d->value += 50;
}

void update_dynamic(int *p)
{
    *p = 999;
}

int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    printf("After swap: x=%d y=%d\n", x, y);

    int arr[5] = {1, 2, 3, 4, 5};
    modify_array(arr, 5);
    printf("Modified array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    struct Data d;
    d.value = 100;
    update_structure(&d);
    printf("Updated structure value: %d\n", d.value);

    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    update_dynamic(ptr);
    printf("Updated dynamic value: %d\n", *ptr);
    free(ptr);

    return 0;
}