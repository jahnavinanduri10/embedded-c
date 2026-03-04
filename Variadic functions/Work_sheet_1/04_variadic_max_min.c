#include <stdio.h>
#include <stdarg.h>

void max_min(int count, ...)
{
    int max, min;
    va_list ap;
    va_start(ap,count);
    int temp = va_arg(ap,int);
    max = min = temp;
    for(int i = 0;i < count;i++)
    {
        if(max < temp)
            max = temp;
        if(min > temp)
            min = temp;
        temp = va_arg(ap,int);
    }

    va_end(ap);
    printf("Maximum value: %d\n",max);
    printf("Minimum value: %d\n",min);
}

int main()
{
    max_min(5,3,5,9,0,7);
}