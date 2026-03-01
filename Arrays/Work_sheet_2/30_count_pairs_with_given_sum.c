/*Question description:
Write a C program to find number of pairs in the array whose sum is equal to a given value.
Sample data:
Input array: 1 5 7 -1 5 Sum = 6
Expected output:
Number of pairs: 3*/

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
    int sum;
    printf("Enter sum: ");
    scanf("%d",&sum);
    int count = 0;

    for(int i = 0;i < n;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            if(arr[i] + arr[j] == sum)
                count++;
        }
    }
    printf("Number of pairs: %d",count);

}