/*Question: Copy array elements
Question description: Write a C program to copy all elements from one array to another.
Sample data:
Input: 1 2 3 4 5
Expected output:
Copied array: 1 2 3 4 5*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],copied_arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    for(int i = 0;i < n;i++)
        copied_arr[i] = arr[i];
    
    printf("Copied array: ");
    for(int i = 0;i < n;i++)
        printf("%d ",copied_arr[i]);
    
}