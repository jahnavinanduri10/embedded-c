#include <stdio.h>

void largest(int n,int arr[])
{
     int max = arr[0];

    for(int i = 0;i < n;i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    printf("The largest element in the array is %d\n",max);
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    largest(n,arr);
}