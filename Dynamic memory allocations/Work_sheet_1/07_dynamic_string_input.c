#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    printf("enter a string: ");
    scanf("%s",str);

    int len = strlen(str);

    char *str1 = malloc(len);
    strcpy(str1,str);

    printf("Copied string is %s\n",str1);
    free(str1);
}