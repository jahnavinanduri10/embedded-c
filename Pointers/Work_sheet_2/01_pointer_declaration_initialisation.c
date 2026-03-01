#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *iptr;
    float *fptr;
    char *cptr;

    iptr = &a;
    fptr = &b;
    cptr = &c;

    printf("Accessing values using pointers:\n");
    printf("int value   = %d\n", *iptr);
    printf("float value = %.2f\n", *fptr);
    printf("char value  = %c\n\n", *cptr);

    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }


    for (int i = 0; i < 5; i++)
        arr[i] = (i + 1) * 10;

    printf("Pointer arithmetic on dynamically allocated array:\n");
    for (int i = 0; i < 5; i++)
        printf("Value at arr[%d] = %d\n", i, *(arr + i));

    void *vptr;
    vptr = arr;                 
    int *new_iptr = (int *)vptr; 

    printf("\nAccessing data after typecasting:\n");
    printf("First element = %d\n", *new_iptr);

    free(arr);

    return 0;
}