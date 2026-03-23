#include <stdio.h>
int main()
{
    int arr[] = {4,3,2,7,8,2,3,1};
    int n = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i = 0;i <= n;i++)
        res[arr[i]]++;

    for(int i = 0;i <=n;i++)
    {
        if(res[i] == 0)
            printf("%d ",res[arr[i]]);
    }
}