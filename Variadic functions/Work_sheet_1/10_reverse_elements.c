#include <stdio.h>
#include <stdarg.h>

void reverse_numbers(int count, ...)
{
    int arr[count];
    va_list ap;
    va_start(ap,count);

    for (int i = 0;i < count;i++)
        arr[i] = va_arg(ap,int);

    va_end(ap);

   for(int i = count-1;i >= 0;i--)
        printf("%d ",arr[i]);
    printf("\n");
}


int main()
{
    reverse_numbers(5,9,5,7,1,3);
    reverse_numbers(3,1,-2,0);
}