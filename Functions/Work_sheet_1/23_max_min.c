#include <stdio.h>

int* max_min(int arr[],int n)
{
    static int result[2];
    result[0] = arr[0];
    result[1] = arr[0];

    for(int i = 1;i < n;i++)
    {
        if(arr[i] < result[0])
            result[0] = arr[i];
        if(arr[i] > result[1])
            result[1] = arr[i];
    }
    return result;
}

int main()
{
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);

    int *res = max_min(a,n);

    printf("Maximum = %d\n",res[0]);
    printf("Minimum = %d\n",res[1]);
}