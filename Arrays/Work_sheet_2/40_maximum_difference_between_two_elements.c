/*Question description:
Write a C program to find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
Sample data:
Input: 2 3 10 6 4 8 1
Expected output:
Maximum difference: 8 (10 - 2)*/

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

    int min = arr[0],max_diff = arr[1] - arr[0];

    for(int i = 1;i < n;i++)
    {
        if(arr[i] - min > max_diff)
        {
            max_diff = arr[i] - min;
        }
        if(min > arr[i])
            min = arr[i];
    }

    printf("Maximum difference: %d",max_diff);
}
