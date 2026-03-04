#include <stdio.h>
#include <stdarg.h>

double average(int count, ...)
{
    double sum = 0;
    va_list ap;
    va_start(ap,count);

    for(int i = 0;i < count;i++)
        sum += va_arg(ap,double);
    va_end(ap);
    
    double avg = (double)sum / count;
    return avg;
}

int main()
{
    double res = average(4,10.5,30.2,40.1,20.6);
    printf("The average is %f",res);
}