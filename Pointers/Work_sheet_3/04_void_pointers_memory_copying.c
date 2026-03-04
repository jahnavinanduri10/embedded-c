#include <stdio.h>

void* mem_copy(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (char*)src;

    for(size_t i = 0;i < n;i++)
        d[i] = s[i];

    return dest;
}


int main()
{
    char src[] = "Hello world";
    char dest[50];

    mem_copy(dest,src,sizeof(src));
    printf("%s\n",dest);
}