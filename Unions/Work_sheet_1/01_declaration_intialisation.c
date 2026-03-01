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
    printf("Integer: %d\n",data.n);

    data.f = 3.12;
    printf("Float: %.2f\n",data.f);

    strcpy(data.str,"Hello");
    printf("String: %s\n",data.str);
}