/*Question: Count even and odd elements
Question description: Write a C program to count how many even and odd numbers are in the array.
Sample data:
Input: 4 7 9 10 22
Expected output:
Even: 3
Odd: 2*/

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

    int odd_count = 0,even_count = 0;

    for(int i = 0;i < n;i++)
    {
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Even: %d\n",even_count);
    printf("Odd: %d\n",odd_count);
}