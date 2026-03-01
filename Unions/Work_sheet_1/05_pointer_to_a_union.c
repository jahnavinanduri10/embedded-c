#include <stdio.h>

union Sample{
    int n;
    float f;
};

int main()
{
    union Sample *s;

    s->n = 45;
    s->f = 8.9;

    printf("Integer: %d\n",s->n);
    printf("Float: %.2f\n",s->f);
}