#include <stdio.h>

int even_odd(int n)
{
    if(n % 2 == 0)
        return 1;
    else    return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(even_odd(n))
        printf("Entered number is even");
    else    
        printf("Entered number is odd");
}