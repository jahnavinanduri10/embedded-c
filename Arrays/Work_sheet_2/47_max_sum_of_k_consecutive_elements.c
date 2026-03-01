/*Question description:
Write a C program to find maximum sum of k consecutive elements in an array.
Sample data:
Input: 2 3 4 1 5 6 7 k = 3
Expected output:
Maximum sum of 3 consecutive elements: 18*/

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
    int k;
    printf("Enter the value of k: ");
    scanf("%d",&k);
    int sum = 0,max_sum = 0;
    for(int i = 0;i <= n-k;i++)
    {
        sum = 0;
        for(int j = 0;j < k;j++)
            sum += arr[i+j];
        if(sum > max_sum)
            max_sum = sum;
    }

    printf("Maximum sum of %d consecutive elements: %d",k,max_sum);
}