#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *str = "Hello";

    char *copy = malloc(strlen(str) + 1);
    if(copy == NULL)
        return 0;
    int i = 0;
    for(i = 0;str[i] != '\0';i++)
    {
        copy[i] = str[i];
    }

    copy[i] = '\0';

    printf("After copying: %s\n",copy);

    free(copy);
}