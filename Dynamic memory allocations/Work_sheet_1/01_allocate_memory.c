#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    *ptr = 4;
    printf("%d",*ptr);
    free(ptr);
}