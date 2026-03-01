/*Question: Right rotate array by n
Question description: Write a C program to rotate an array to the right by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 4 5 1 2 3*/

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
    int rot;
    printf("Enter n value: ");
    scanf("%d",&rot);

    for(int i = 0;i < rot;i++)
    {
        int temp = arr[n-1];
        for(int j = n;j > 0;j--)
            arr[j] = arr[j-1];
        arr[0] = temp;
    }

    printf("Rotated array: ");
    for(int i = 0;i < n;i++)
        printf("%d ",arr[i]);
}