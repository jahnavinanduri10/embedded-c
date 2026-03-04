#include <stdio.h>
typedef int (*condition_func)(int);

int is_even(int num)
{
    return (num % 2 == 0);
}

int is_positive(int num)
{
    return (num > 0);
}

int is_prime(int num)
{
    if(num <= 1)
        return 0;
    for(int i = 2;i * i <= num;i++)
    {
        if(num % i == 0)
            return 0;
    }   
    return 1;
}

int find(int arr[],int size,condition_func condition,int *found)
{
    for(int i = 0;i < size;i++)
    {
        if(condition(arr[i]))
        {
            *found = 1;
            return arr[i];
        }
    }
    *found = 0;
    return 0;
}

int main()
{
    int arr[] = { -3, -2, -1, 0, 5, 8, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int found,res;

    res = find(arr, size, is_even, &found);
    if(found)
        printf("First even number: %d\n",res);

    res = find(arr, size, is_positive, &found);
    if(found)
        printf("First positive number: %d\n",res);

    res = find(arr, size, is_prime, &found);
    if(found)
        printf("First prime number: %d\n",res);
}