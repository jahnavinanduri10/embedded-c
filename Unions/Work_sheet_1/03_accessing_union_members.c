/*Accessing Union Members
Using the union from exercise 1, assign values to more than one member at a time and print all members.
Observe which value is retained and explain why.
*/
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