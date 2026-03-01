/*Question: Split array into halves
Question description: Write a C program to split the array into two halves and print them separately.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
First half: 1 2 3
Second half: 4 5 6*/

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

    int half = n/2;
    int a[half],b[half];
    
    int i = 0;
        while(i < half)
        {
            a[i] = arr[i];
            i++;
        }
        int j = 0;
        while(i < n)
        { 
            b[j] = arr[i];
            j++,i++;
        }

    printf("First half: ");
    for(int i = 0;i < half;i++)
        printf("%d ",a[i]);
    printf("Second half: ");
    for(int i = 0;i < half;i++)
        printf("%d ",b[i]);
}