#include <stdio.h>

#define SET(num,n)  (num | (1 << n))
#define CLEAR(num,n) (num & (~(1 << n)))
#define TOGGLE(num,n) (num ^ (1 << n))

int main()
{
    int num,n;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter n value: ");
    scanf("%d",&n);

    printf("Set: %d\n",SET(num,n));
    printf("Clear: %d\n",CLEAR(num,n));
    printf("Toggle: %d\n",TOGGLE(num,n));
}