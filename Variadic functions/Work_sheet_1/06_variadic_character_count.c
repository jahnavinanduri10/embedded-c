#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int character_count(int count, ...)
{
    int char_count = 0;
    va_list ap;
    va_start(ap,count);

    for(int i = 0;i < count;i++)
    {
        char *temp = va_arg(ap,char*);
        char_count += strlen(temp);
    }
    va_end(ap);
    return char_count;
}

int main()
{
    printf("The total number of characters is %d\n",character_count(3,"BitLearn",".","Bitsilica"));
    return 0;
}