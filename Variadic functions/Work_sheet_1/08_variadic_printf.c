#include <stdio.h>
#include <stdarg.h>

// void my_printf(int count, ...)
// {
//     va_list ap;
//     va_start(ap,count);

//     printf("The values are: ");
//     for(int i = 0;i < count;i++)
//         printf("%d ",va_arg(ap,int));
//     va_end(ap);
// }

// int main()
// {
//     my_printf(3,10,20,30);
// }

int my_printf(const char *string, ...)
{
    va_list ap;
    va_start(ap,string);

    int res = vprintf(string,ap);
    va_end(ap);
    return res;
}
int main()
{
    my_printf("Hello %s, age %d\n","Jahnavi",23);
}