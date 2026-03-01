#include <stdio.h>

int main()
{
    int arr[4] = {100,200,300,400};

    for(int i = 0;i < 4;i++)
        printf("%d ",*(arr+i));
}