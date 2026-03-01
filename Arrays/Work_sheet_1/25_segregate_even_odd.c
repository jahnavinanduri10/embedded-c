/*Question: Segregate even and odd
Question description: Write a C program to arrange all even numbers first and then all odd numbers.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
Even numbers: 2 4 6
Odd numbers: 1 3 5*/

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
    
    int even_array[n],even_count = 0,odd_array[n],odd_count = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] % 2 == 0)
            even_array[even_count++] = arr[i];
        else
            odd_array[odd_count++] = arr[i];
    }

    printf("Even numbers: ");
    for(int i = 0;i < even_count;i++)
        printf("%d ",even_array[i]);
    printf("\nOdd numbers: ");
    for(int i = 0;i < odd_count;i++)
        printf("%d ",odd_array[i]);
}