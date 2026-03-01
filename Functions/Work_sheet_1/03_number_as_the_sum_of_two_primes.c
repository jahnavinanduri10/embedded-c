#include <stdio.h>

int prime(int n)
{
    int flag = 0;

    if (n <= 1)   
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (!flag)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int prime_arr[50],index = 0;
    for(int i = 1;i < n;i++)
    {
        if(prime(i))
            prime_arr[index++] = i;
    }

    int j;
    for(int i = 0;i <= index;i++)
    {
        j = i+1;
        while(j <= index)
        {
            if(prime_arr[i] + prime_arr[j] == n)
            {
                printf("%d = %d + %d\n",n,prime_arr[i],prime_arr[j]);
                return 0;
            }
            j++;
        }
    }
}