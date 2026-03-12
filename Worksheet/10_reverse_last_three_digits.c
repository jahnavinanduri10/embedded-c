#include <stdio.h>

int main()
{
    int num;
    printf("Enter a 6-digit number: ");
    scanf("%d",&num);
    int temp = num % 1000,res = 0;
    num = num - temp;
    while(temp > 0)
    {
        int rem = temp % 10;
        res = res*10 + rem;
        temp /= 10;
    }
    num = num + res;
    printf("%d\n",num);
}