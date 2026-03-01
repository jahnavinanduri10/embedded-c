/*Question: Find second largest element
Question description: Write a C program to find the second largest number in the array.
Sample data:
Input: 10 20 50 40
Expected output:
Second largest: 40*/

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

    int largest = arr[0],second_largest=arr[0];
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    for(int i = 0;i < n;i++)
    {
        if(arr[i] < largest && arr[i] > second_largest)
            second_largest = arr[i];
    }

    printf("Second largest: %d",second_largest);    
}
