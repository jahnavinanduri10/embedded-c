/*Question description:
Write a C program to find all leader elements in the array (elements greater than all elements to their right).
Sample data:
Input: 16 17 4 3 5 2
Expected output:
Leader elements: 17 5 2*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],leader_elements[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    int max = 0,index = 0,flag = 0;
    for(int i = 0;i < n;i++)
    {
        max = 0,flag = 0;
        for(int j = i + 1;j < n;j++)
        {
            if(arr[i] < arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
            leader_elements[index++] = arr[i];
    }

    printf("Leader elements: ");
    for(int i = 0;i < index;i++)
        printf("%d ",leader_elements[i]);
}