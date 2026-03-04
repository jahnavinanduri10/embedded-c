#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int total = 0;

    va_list ap;
    va_start(ap,count);

    for(int i = 0;i < count;i++)
        total += va_arg(ap,int);
    va_end(ap);

    return total;
}

int main()
{
    printf("Sum(1,2,3): %d\n",sum(3,1,2,3));
    printf("Sum(1,2,3,4,5): %d\n",sum(5,1,2,3,4,5));
    printf("Sum(-1,-2,-3): %d\n",sum(3,-1,-2,-3));
}