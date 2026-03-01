#include <stdio.h>

union Number{
    int n;
    union Data{
        float f;
        char ch;
    }d;
};

int main()
{
    union Number num;

    num.n = 12;
    printf("Integer: %d\n",num.n);

    num.d.f = 3.2;
    printf("Float number: %.2f\n",num.d.f);

    num.d.ch = 'a';
    printf("Char: %c\n",num.d.ch);
}