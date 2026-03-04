#include <stdio.h>
#include <stdarg.h>


void print_even(int count,...)
{
    va_list ap;
    va_start(ap,count);

    for(int i = 0;i < count;i++)
    {
        int temp = va_arg(ap,int);
        if(temp % 2 == 0)
            printf("%d ",temp);
    }
    va_end(ap);

    printf("\n");
}

int main()
{
    print_even(5,9,2,7,6,3);
    print_even(3,1,-2,0);
}