#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    if(n & (1 << 7))
        printf("MSB of %d is set(1)",n);
    else printf("MSB of %d is not set(1)",n);
}
