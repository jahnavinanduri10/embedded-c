#include <stdio.h>
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Before swapping: n1 = %d, n2 = %d\n",n1,n2);

    SWAP(n1,n2);

    printf("After swapping: n1 = %d, n2 = %d\n",n1,n2);
}