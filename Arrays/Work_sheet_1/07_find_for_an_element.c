/*Question: Find for an element
Question description: Write a C program to search for a number in an array and print its index.
Sample data:
Array: 10 20 30 40 50
Find: 30
Expected output:
Element found at index: 2*/

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
    int key,flag = 0;
    printf("Enter element to find: ");
    scanf("%d",&key);

    for(int i = 0;i < n;i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index: %d",i+1);
            flag = 1;
            break;
        }
    }

    if(!flag) printf("Element not found\n");
}