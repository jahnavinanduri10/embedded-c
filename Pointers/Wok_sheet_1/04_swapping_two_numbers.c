#include <stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2,b = 3;
    printf("Before swapping: %d %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping: %d %d",a,b);
}