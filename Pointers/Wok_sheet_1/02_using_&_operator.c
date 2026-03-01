#include <stdio.h>

int main()
{
    int x;
    float y;
    char z;

    int *ptr1 = &x;
    float *ptr2 = &y;
    char *ptr3 = &z;

    printf("%p %p %p",ptr1,ptr2,ptr3);
}