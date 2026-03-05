#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *a, *b, *c, *d, *e;

    printf("Allocating blocks...\n");

    a = malloc(100);
    b = malloc(200);
    c = malloc(300);
    d = malloc(400);

    printf("Block a (100 bytes): %p\n", a);
    printf("Block b (200 bytes): %p\n", b);
    printf("Block c (300 bytes): %p\n", c);
    printf("Block d (400 bytes): %p\n", d);

    printf("\nFreeing block b and d...\n");
    free(b);
    free(d);

    printf("\nAllocating block e (180 bytes)...\n");
    e = malloc(180);
    printf("Block e (180 bytes): %p\n", e);

    printf("\nFreeing all remaining blocks...\n");
    free(a);
    free(c);
    free(e);

    return 0;
}