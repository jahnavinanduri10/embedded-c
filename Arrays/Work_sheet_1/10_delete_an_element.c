/*Question: Delete element at position
Question description: Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40*/

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

    int pos;
    printf("Delete at position: ");
    scanf("%d",&pos);

    for(int i = 0;i < n;i++)
    {
        if(i == pos)
        {
            for(int j = i;j < n;j++)
                arr[j] = arr[j+1];
        }
    }

    printf("Array after deletion: ");
    for(int i = 0;i < n-1;i++)
        printf("%d ",arr[i]);
}