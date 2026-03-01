/*Question: Insert element at position
Question description: Write a C program to insert a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Insert: 25 at position 2
Expected output:
Array after insertion: 10 20 25 30 40*/

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
    
    int element,position;

    printf("Enter element and position: ");
    scanf("%d %d",&element,&position);

    for(int i = n+1;i > position; i--)
        arr[i] = arr[i-1];
    arr[position] = element;

    printf("Array after insertion: ");
    for(int i = 0;i < n+1;i++)
        printf("%d ",arr[i]);
}