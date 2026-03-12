#include <stdio.h>

int largest(int arr[],int n)
{
    int max = arr[0];

    for(int i = 0;i < n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    printf("Largest element %d\n",largest(arr,n));
}