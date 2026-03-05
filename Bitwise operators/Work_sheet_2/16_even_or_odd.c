#include <stdio.h>

int main()
{
    int n = 17;

    if (n & 1)
        printf("%d is Odd\n", n);
    else
        printf("%d is Even\n", n);

    return 0;
}