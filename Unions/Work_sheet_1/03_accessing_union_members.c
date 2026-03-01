#include <stdio.h>
#include <string.h>

union Data{
    int n;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    data.n = 10;
    data.f = 3.12;

    printf("Integer: %d\n",data.n);
    printf("Float: %.2f\n",data.f);
    printf("String: %s\n",data.str);   
}