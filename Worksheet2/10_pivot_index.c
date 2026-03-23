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
    int left_sum = 0,right_sum = 0,total_sum = 0;
    
    for(int i = 0;i < n;i++)
        total_sum += arr[i];
    
    for(int i = 0;i < n;i++)
    {
        right_sum = total_sum - left_sum - arr[i];

        if(left_sum == right_sum)
        {
            printf("Pivot index is %d",i);
            return 0;
        }

        left_sum += arr[i];
    }
}