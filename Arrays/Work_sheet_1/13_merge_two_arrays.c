/*Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6*/

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the number of elements for array1 and array2: ");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("Enter the elements of first array: ");
    for(int i = 0;i < n1;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the elements of second array: ");
    for(int i = 0;i < n2;i++)
        scanf("%d",&arr2[i]);
    
    int merged_array[n1+n2];
    int i = 0;
        while(i < n1)
        {
            merged_array[i] = arr1[i];
            i++;
        }
        int j = 0;
        while(i < n1+n2)
        { 
            merged_array[i] = arr2[j];
            j++,i++;
        }

    printf("Merged array: ");
    for(int i = 0;i < n1+n2;i++)
        printf("%d ",merged_array[i]);

}