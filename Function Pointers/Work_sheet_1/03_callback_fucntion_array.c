#include <stdio.h>

typedef int (*Callback)(int);

int increment(int x)
{
    return x+1;
}

int doubleValue(int x)
{
    return x * 2;
}

void processArray(int arr[],int size,Callback cb)
{
    for(int i = 0;i < size;i++)
        arr[i] = cb(arr[i]);
}

int main()
{
    int arr[] = {1,2,3,4,5};

    processArray(arr,5,increment);
    processArray(arr,5,increment);
}