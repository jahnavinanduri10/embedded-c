/*Structure Inside a Union
Define a union that contains a structure (for example, struct { int x, y; }) and an int.
Write a program to set and access the structure members through the union.
*/
#include <stdio.h>
#include <stdlib.h>

union Data{
    struct num{
        int x;
        int y;
    }n;
    int a;
};

int main()
{
    union Data d;
    d.n.x = 4;
    d.n.y = 5;
    d.a = 8;

    printf("Struct:x = %d\n",d.n.x);
    printf("Struct:y = %d\n",d.n.y);
    printf("Union:a = %d\n",d.a);
}