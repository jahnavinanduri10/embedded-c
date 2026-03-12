#include <stdio.h>

int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int max = arr[0],min = arr[0],max_ind = 0,min_ind = 0;

    for(int i = 0;i < n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_ind = i;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            min_ind = i;
        }
    }

    arr[min_ind] = max;
    arr[max_ind] = min;

    printf("After interchanging: ");
    for(int i = 0;i < n;i++)
        printf("%d ",arr[i]);
}