//Implement the function setbits(x, p, n, y) that sets n bits in x starting at position p with the rightmost n bits of y.

#include <stdio.h>

void setbits(int x,int p,int n,int y)
{
    printf("After setting: %d\n",(x | (y & (1 << n) - 1) << (n-p-1)));
}
int main()
{
    int num1,n,p,num2;
    printf("Enter num,n bits,p position,and num2: ");
    scanf("%d %d %d %d",&num1,&n,&p,&num2);

    setbits(num1,p,n,num2);
}