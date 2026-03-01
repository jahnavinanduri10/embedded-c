#include <stdio.h>
#include <stdlib.h>

struct Data{
    int a;
    float f;
    char ch;
};

union Info{
    int a;
    float f;
    char ch;
};

int main()
{
    struct Data d;
    union Info i;

    printf("Szie of the structure is %d\n",sizeof(d));
    printf("Szie of the union is %d\n",sizeof(i));

    d.a = 2;
    d.f = 1.5;
    d.ch = 'a';

    i.a = 2;
    i.f = 1.5;
    i.ch = 'b';

    printf("Structure details: \n");
    printf("int = %d\n",d.a);
    printf("float = %.2f\n",d.f);
    printf("char = %c\n",d.ch);

    printf("Union details: \n");
    printf("int = %d\n",i.a);
    printf("float = %.2f\n",i.f);
    printf("char = %c\n",i.ch);


}