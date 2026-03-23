#include<stdio.h>

struct Data{
    int a;
    float f;
};

struct Data* inc(struct Data *s)
{
    s->a += 1;
    s->f += 1;
}

int main()
{
    struct Data d = {.a = 2, .f = 4.5};
    struct Data *d1 = inc(&d);
    printf("%d\n",d1->a);
    printf("%f\n",d1->f);
}