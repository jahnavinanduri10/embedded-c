/*Union Declaration and Initialization
Declare a union named Data with an int, a float, and a char array of size 20.
Write a program to initialize and print each member, one after the other. Observe and explain the output.*/

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