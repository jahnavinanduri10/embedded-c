#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

char* concat_strings(int count, ...)
{
    int total;
    va_list ap;
    va_start(ap,count);

    for(int i = 0;i < count;i++)
        total += strlen(va_arg(ap,char*));
    va_end(ap);

    char* res = malloc(total+1);
    if(!res)
        return NULL;
    
    va_start(ap,count);
    for(int i = 0;i < count;i++)
            strcat(res,va_arg(ap,char*));
    va_end(ap);
    return res;
}

int main()
{
    char* str = concat_strings(3,"BitLearn",".","Bitsilica");
    printf("%s\n",str);
    free(str);
}