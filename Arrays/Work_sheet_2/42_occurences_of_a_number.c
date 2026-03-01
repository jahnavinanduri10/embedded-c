/*Question description:
Write a C program to count how many times a specific number appears in an array.
Sample data:
Input array: 1 2 3 2 2 5 Number to count: 2
Expected output:
Number 2 occurs 3 times*/

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

    int num;
    printf("Number to count: ");
    scanf("%d",&num);
    int count = 0;

    for(int i = 0;i < n;i++)
    {
        if(arr[i] == num)
            count++;
    }

    printf("Number %d occurs %d times",num,count);
}