/*Question: Frequency of each element
Question description: Write a C program to count the frequency of each element in an array.
Sample data:
Input: 1 2 2 3 3 3
Expected output:
1 occurs 1 time
2 occurs 2 times
3 occurs 3 times*/

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
        printf("%d occurs %d times\n",i,freq_arr[i]);
    }
}