#include <stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("After setting the position: %d\n",(num | (1 << n)));
}