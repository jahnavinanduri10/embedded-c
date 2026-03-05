#include <stdio.h>

int main()
{
    int *p = NULL;
    if(p != NULL)
    {
        return 0;
    }

    int a = 5;
    p = &a;
    printf("%d",*p);
}