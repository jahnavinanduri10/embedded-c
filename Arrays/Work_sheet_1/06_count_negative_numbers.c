/*Question: Count negative elements
Question description: Write a C program to count total number of negative elements in an array.
Sample data:
Input: -1 3 -4 5 0 -7
Expected output:
Total negative elements: 3*/

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

    int negative_count = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] < 0)
            negative_count++;
    }
    printf("Total negative elements: %d",negative_count);
}