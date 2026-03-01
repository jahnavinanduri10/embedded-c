#include <stdio.h>

union Data {
    int num;
    double d;
    char ch;
};

int main()
{
    union Data d;

    printf("Size of the union: %d",sizeof(d));
}