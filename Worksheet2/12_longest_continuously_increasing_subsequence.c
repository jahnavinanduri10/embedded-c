#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
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

    qsort(arr,n,sizeof(int),cmp);
    int res[n],ind = 0;
    int max_len = 1,len = 1;
    for(int i = 1;i < n;i++)
    {
        if(arr[i] == arr[i-1] + 1)
        {
            len++;
            res[ind++]=arr[i];
        }
        else if(arr[i] != arr[i-1])
            len = 1;
        if(len > max_len)
            max_len = len;
    }

   for(int i = 0;i < ind;i++)
    printf("%d",res[i]);
}