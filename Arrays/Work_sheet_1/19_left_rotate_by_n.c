/*Question: Left rotate array by n
Question description: Write a C program to rotate an array to the left by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 3 4 5 1 2*/

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
        int temp = arr[0];
        for(int j = 0;j < n;j++)
            arr[j] = arr[j+1];
        arr[n-1] = temp;
    }

    printf("Rotated array: ");
    for(int i = 0;i < n;i++)
        printf("%d ",arr[i]);
}