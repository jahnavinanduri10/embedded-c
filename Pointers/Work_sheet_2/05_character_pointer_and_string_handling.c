#include <stdio.h>
#include <stdlib.h>

void str_copy(char *dest, const char *src)
{
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
}

void str_concat(char *dest, const char *src)
{
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
}

void str_reverse(char *str)
{
    char *start = str;
    char *end = str;

    while (*end)
        end++;
    end--;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char *str1 = "Hello";
    char *str2 = malloc(50);
    char *str3 = malloc(50);

    if (str2 == NULL || str3 == NULL)
        return 1;

    str_copy(str2, str1);
    printf("Copied string: %s\n", str2);

    str_concat(str2, " World");
    printf("Concatenated string: %s\n", str2);

    str_copy(str3, str2);
    str_reverse(str3);
    printf("Reversed string: %s\n", str3);

    printf("Traversing string using pointer:\n");
    char *p = str2;
    while (*p)
        printf("%c ", *p++);

    free(str2);
    free(str3);

    return 0;
}