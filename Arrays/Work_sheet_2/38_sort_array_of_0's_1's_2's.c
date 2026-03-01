/*Question description:
Write a C program to sort an array consisting of only 0s, 1s, and 2s.
Sample data:
Input: 0 1 2 0 1 2 1 0
Expected output:
Sorted array: 0 0 0 1 1 1 2 2*/

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
    
    int count0 = 0,count1 = 0,count2 = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }

    int index = 0;
    for(int i = 0;i < count0;i++) arr[index++] = 0;
    for(int i = 0;i < count1;i++) arr[index++] = 1;
    for(int i = 0;i < count2;i++) arr[index++] = 2;

    printf("Sorted array: ");
    for(int i = 0;i < n;i++)
        printf("%d ",arr[i]);
}