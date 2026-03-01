/*Question description:
Write a C program to find the second smallest element in the array.
Sample data:
Input: 12 13 1 10 34 1
Expected output:
Second smallest element is 10*/

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
    int min = arr[0],second_min;

    for(int i = 0;i < n;i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    for(int i = 0;i < n;i++)
    {
        if(arr[i] > min && arr[i] < second_min)
            second_min = arr[i];
    }

    printf("Second smallest element is %d",second_min);
}