#include <stdio.h>

int main()
{
    int arr[] = {1,0,4,0,5,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < n;i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i;j < n-1;j++)
                arr[j] = arr[j+1];
        }
        arr[n-1] = 0;
        if(arr[i] == 0)
        i--;
    }
    printf("After shifting: ");
    for(int i = 0;i < n;i++)
        scanf("%d ",arr[i]);
}