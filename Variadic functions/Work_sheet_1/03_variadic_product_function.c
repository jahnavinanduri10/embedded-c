#include <stdio.h>
#include <stdarg.h>

int product(int count, ...)
{
    int res = 1;

    va_list ap;
    va_start(ap,count);

    for(int i = 0;i < count;i++)
        res *= va_arg(ap,int);
    va_end(ap);

    return res;
}

int main()
{
    printf("Product(1,2,3): %d\n",product(3,1,2,3));
    printf("Product(4,1,2,3,4): %d\n",product(4,1,2,3,4));
    printf("Product(3,-1,-2,-3): %d\n",product(3,-1,-2,-3));
}