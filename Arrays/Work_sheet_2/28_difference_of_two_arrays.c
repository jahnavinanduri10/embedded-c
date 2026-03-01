/*Question description:
Write a C program to find the difference of two arrays (elements present in first array but not in second).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Difference (Array1 - Array2): 1 2*/

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

    int flag = 0;

    printf("Difference (Array1 - Array2): ");
    for(int i = 0;i < n1;i++)
    {
        flag = 0;
        for(int j = 0;j < n2;j++)
        {
            if(a1[i] == a2[j])
            {
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("%d ",a1[i]);
    }

}