/*Question: Count prime numbers
Question description: Write a C program to count and display all prime numbers in an array.
Sample data:
Input: 2 4 5 6 7 8
Expected output:
Primes: 2 5 7
Count: 3*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int prime_count = 0,flag = 0,prime[n];
    for(int i = 0;i < n;i++)
    {
        flag = 0;
        for(int j = 2;j < arr[i];j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 1;
                break;  
            }
        }
        if(!flag)
        {
            prime[prime_count++] = arr[i];
        }
    }

    printf("Primes: ");
    for(int i = 0;i < prime_count;i++)
        printf("%d ",prime[i]);
    printf("Count: %d",prime_count);
}