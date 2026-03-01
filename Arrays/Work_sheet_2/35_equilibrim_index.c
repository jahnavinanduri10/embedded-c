/*Question description:
Write a C program to find the index where the sum of elements to the left is equal to the sum to the right.
Sample data:
Input: -7 1 5 2 -4 3 0
Expected output:
Equilibrium index is 3*/

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
    // for(int i = 0;i < n/2;i++)
    // {
    //     left_sum += arr[i];
    //     right_sum += arr[n-i-1];
    //     if(left_sum == right_sum)
    //     {
    //         printf("Equilibrium index is %d",i+1);
    //         break;
    //     }
    // }
    for(int i = 0;i < n;i++)
        total_sum += arr[i];
    
    for(int i = 0;i < n;i++)
    {
        right_sum = total_sum - left_sum - arr[i];

        if(left_sum == right_sum)
        {
            printf("Equilibrium index is %d",i);
            return 0;
        }

        left_sum += arr[i];
    }
}