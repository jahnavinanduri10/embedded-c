/*Question: Find duplicate elements
Question description: Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2*/


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
    
    printf("Duplicate elements: ");
    for(int i = 0;i < 100;i++)
    {
        if(freq_arr[i] > 1)
            printf("%d ",i);
    }

}