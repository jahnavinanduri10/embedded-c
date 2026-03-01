#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int last = arr[n-1];
    int actual_sum = (last*(last + 1)) / 2;

    int arr_sum = 0;

    for(int i = 0;i < n;i++)
        arr_sum += arr[i];

    int difference = actual_sum - arr_sum;

    int avg = difference / 2;

    int sum_smaller = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] <= avg)
            sum_smaller += arr[i];
    }

    int totalsmaller = avg * (avg + 1) / 2;

    int first = totalsmaller - sum_smaller;
    int second = difference - first;

    printf("Missing numbers: %d %d\n",first,second);

}