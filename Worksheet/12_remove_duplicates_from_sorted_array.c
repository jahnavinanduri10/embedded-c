#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in sorted way: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    int index = n;
    for(int i = 0;i < index-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            for(int j = i+1;j < index-1;j++)
                arr[j] = arr[j+1];
            index--;
            i--;
        }
    }
    printf("Array after removing duplicates: ");
    for(int i = 0;i < index;i++)
        printf("%d ",arr[i]);
}