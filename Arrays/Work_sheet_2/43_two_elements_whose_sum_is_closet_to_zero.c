
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
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

    int left = 0,right = n-1;
    int minsum = arr[left] + arr[right];
    int minleft = left,minright = right;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum < minsum)
        {
            minsum = sum;
            minleft = left;
            minright = right;
        }
        if(sum < 0)
            left++;
        else    
            right--;
    }

    printf("Pair whose sum is closed to zero: %d %d\n",minleft,minright);
}