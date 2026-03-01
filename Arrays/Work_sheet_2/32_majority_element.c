/*Question description:
Write a C program to find the majority element in an array (element appearing more than n/2 times).
Sample data:
Input: 2 2 1 2 3 2 2
Expected output:
Majority element: 2*/

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
    int freq_arr[100]={0};
    for(int i = 0;i < n;i++)
        freq_arr[arr[i]]++;

    int max_count = 0,elemnet = 0;
    for(int i = 0;i < 100;i++)
    {
        if(max_count < freq_arr[i])
        {
            max_count = freq_arr[i];
            elemnet = i;        
        }   
    }
    printf("Majority element: %d",elemnet);

}