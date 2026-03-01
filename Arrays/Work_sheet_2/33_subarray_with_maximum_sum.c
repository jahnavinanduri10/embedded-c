/*Question description:
Write a C program to find the maximum sum of a contiguous subarray.
Sample data:
Input: -2 -3 4 -1 -2 1 5 -3
Expected output:
Maximum contiguous sum is 7*/

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
 
    int max_sum = arr[0],sum = arr[0];

    for(int i = 1;i < n;i++)
    {
        if(sum < 0)
            sum = arr[i];
        else
            sum += arr[i];

        if(max_sum < sum)
            max_sum = sum;
    }

    printf("Maximum contiguous sum is %d",max_sum);
}