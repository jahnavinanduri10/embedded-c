/*Question: Sum of even numbers
Question description: Write a C program to find the sum of all even numbers in an array.
Sample data:
Input: 2 3 4 5 6
Expected output:
Sum of even numbers: 12*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int even_sum = 0;

    for(int i = 0;i < n;i++)
    {
        if(arr[i] % 2 == 0)
            even_sum += arr[i];
    }

    printf("Sum of even numbers: %d",even_sum);
}