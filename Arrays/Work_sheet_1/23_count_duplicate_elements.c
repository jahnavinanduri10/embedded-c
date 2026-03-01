/*Question: Count duplicate elements
Question description: Write a C program to count how many duplicate values are in the array.
Sample data:
Input: 1 2 3 1 4 2
Expected output:
Total duplicate elements: 2*/

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

    int freq_arr[100] = {0};
    for(int i = 0;i < n;i++)
        freq_arr[arr[i]]++;
    int count = 0;
    for(int i = 0;i < 100;i++)
    {
        if(freq_arr[i] > 1)
        count++;
    }

    printf("Total duplicate elements:%d",count);
}