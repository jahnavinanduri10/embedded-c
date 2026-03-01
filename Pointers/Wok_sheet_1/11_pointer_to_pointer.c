#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    int **pp = &p;

    printf("%d %d %d",a,*p,**pp);
}