#include <stdio.h>

int reverse(int num,int res)
{
    if(num > 0)
    {
        int rem = num % 10;
        res = (res * 10)+ rem;
        reverse(num/10,res);
    }
    return res;
}
int main()
{
    int num,res = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Reversed number %d\n",reverse(num,res));
}