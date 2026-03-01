#include <stdio.h>

int length(char *str)
{
    if (*str == '\0') {
        return 0;
    }
    return 1 + length(str + 1);
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    printf("Length of string is %d",length(str));
}