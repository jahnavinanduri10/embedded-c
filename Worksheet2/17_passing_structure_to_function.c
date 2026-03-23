#include<stdio.h>

struct Data{
    int a;
    float f;
    char ch;
};

void print(struct Data *s)
{
    printf("%d\n",s->a);
    printf("%f\n",s->f);
    printf("%c",s->ch);
}

int main()
{
    struct Data d = {.a = 2, .f = 4.5, .ch = 'a'};
    print(&d);
}