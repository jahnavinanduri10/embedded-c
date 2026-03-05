#include <stdio.h>
#include <stdarg.h>

void printStrings(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        char *str = va_arg(args, char *);
        printf("%s\n", str);
    }

    va_end(args);
}

int main()
{
    printStrings(3, "apple", "banana", "cherry");
    return 0;
}