#include <stdio.h>

void display(int *arr,int n)
{
    for(int i = 0;i < n;i++)
        printf("%d ",*(arr+i));
}

int main()
{
    int arr[] = {1,2,3,4,5};

    display(arr,5);
}