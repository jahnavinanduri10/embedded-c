/*Question description:
Write a C program to rotate the elements of an array by k positions to the right.
Sample data:
Input: 1 2 3 4 5 k = 2
Expected output:
Output: 4 5 1 2 3*/

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
    printf("Enter no of positions: ");
    scanf("%d",&k);

    for(int i = 0;i < k;i++)
    {
        int temp = arr[n-1];
        for(int j = n;j > 0;j--)
            arr[j] = arr[j-1];
        arr[0] = temp;
    }

    printf("Rotated array: ");
    for(int i = 0;i < n;i++)
        printf("%d ",arr[i]);

}