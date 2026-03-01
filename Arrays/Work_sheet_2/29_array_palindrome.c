/*Question description:
Write a C program to check whether an array is palindrome (reads the same forward and backward).
Sample data:
Input: 1 2 3 2 1
Expected output:
The array is a palindrome.*/

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

    int flag = 0;
    for(int i = 0;i < n/2;i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)  printf("The array is not a palindrome.");
    else  printf("The array is a palindrome.");
}