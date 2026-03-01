/*Question description:
Write a C program to find the union of two arrays (all unique elements from both arrays).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Union: 1 2 3 4 5 6*/

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the number of elements: ");
    scanf("%d%d",&n1,&n2);
    int a1[n1],a2[n2];
    printf("Enter the elements in first array: ");
    for(int i = 0;i < n1;i++)
        scanf("%d",&a1[i]);
    printf("Enter the elements in second array: ");
    for(int i = 0;i < n2;i++)
        scanf("%d",&a2[i]);

    int union_arr[n1+n2],index = 0,flag = 0;
    for(index = 0;index < n1;index++)
        union_arr[index] = a1[index];

    for(int i = 0;i < n2;i++)
    {
        flag = 0;
        for(int j = 0;j < index;j++)
        {
            if(a2[i] == union_arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
            union_arr[index++] = a2[i];
    }

    printf("Union: ");
    for(int i = 0;i < index;i++)
        printf("%d ",union_arr[i]);
}