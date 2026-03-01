#include <stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    printf("Bit %d of %d is ",n,num);
    if(num & (1 << (n-1)))
        printf("1");
    else printf("0");
}