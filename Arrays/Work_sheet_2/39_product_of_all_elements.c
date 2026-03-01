/*Question description:
Write a C program to find the product of all elements in the array.
Sample data:
Input: 1 2 3 4
Expected output:
Product: 24*/

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
    int product = 1;
    for(int i = 0;i < n;i++)
        product *= arr[i];

    printf("Product: %d",product);
}