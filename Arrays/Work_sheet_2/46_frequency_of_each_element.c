/*Question description:
Write a C program to find the frequency of each element in the array.
Sample data:
Input: 10 20 10 30 20 20 10 10
Expected output:
10: 4 20: 3 30: 1*/

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

    for(int i = 0;i < 100;i++)
    {
        if(freq_arr[i] > 0)
        printf("%d: %d ",i,freq_arr[i]);
    }

}