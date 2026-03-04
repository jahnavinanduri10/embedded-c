#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    printf("%p %p %p",arr,ptr,&arr);
}