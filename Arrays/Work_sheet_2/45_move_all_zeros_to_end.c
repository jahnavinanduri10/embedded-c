/*Question description:
Write a C program to move all zeros in the array to the end while maintaining the order of non-zero elements.
Sample data:
Input: 1 0 2 0 0 3 4
Expected output:
Output: 1 2 3 4 0 0 0*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < n-1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = 0;
            i++;
        }
        if(arr[i] != 0)
            i++;
    }

    printf("Output: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}