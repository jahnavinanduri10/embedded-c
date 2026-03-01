#include <stdio.h>

int main()
{
    int arr[3] = {2,4,6};

    for(int i = 0;i < 3;i++)
        *(arr+i) = (*(arr+i)) + 1;

    for(int i = 0;i < 3;i++)
        printf("%d ",*(arr+i));
}