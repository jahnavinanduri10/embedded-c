/*Question description:
Write a C program to check if one array is a subset of another array.
Sample data:
Array 1: 1 2 3 4 5 Array 2: 2 4 5
Expected output:
Array2 is a subset of Array1*/

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the number of elements n1,n2: ");
    scanf("%d %d",&n1,&n2);
    int a1[n1],a2[n2];
    printf("Enter the elements of first array: ");
    for(int i = 0;i < n1;i++)
        scanf("%d",&a1[i]);
    printf("Enter the elements of second array: ");
    for(int i = 0;i < n2;i++)
        scanf("%d",&a2[i]);
    
    int count = 0;
    for(int i = 0;i < n1;i++)
    {
        count = 0;
        for(int j = 0;j < n2;j++)
        {
            if(a1[i] == a2[j])
            {
                count++;
                i++;
            }
            else break;
        }
        if(count == n2)
        {
            printf("Array2 is a subset of Array1");
            return 0;
        }
    }

    printf("Array2 is not a subset of Array1");

}