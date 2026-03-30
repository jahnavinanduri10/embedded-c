/*Pointer to a Union
Write a program that defines a union called Sample with an int and a float.
Declare a pointer to the union. Assign values using the pointer and print the results.
*/
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