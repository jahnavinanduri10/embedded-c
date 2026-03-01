/*Question description:
Write a C program to find the missing number in an array of size n containing numbers from 1 to n+1.
Sample data:
Input: 1 2 4 5 6
Expected output:
Missing number is: 3*/

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
    for(int i = 0;i < n-1;i++)
    {
        if(arr[i] - arr[i+1] != -1)
        {
            printf("Missing number is: %d",arr[i]+1);
        }
    }

}