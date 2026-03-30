/*: Log Session a Dynamic 2D Array
Goal: Learn how to allocate and access a 2D array dynamically.
Activity:
•	Ask the user for number of rows and columns.
•	Allocate memory for an array of row pointers.
•	Allocate each row separately using malloc.
•	Accept values for each row-column index.
•	Display the matrix.
•	Free each row and then the row pointer array.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    printf("Rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];

    printf("Enter array elements: ");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Array elements: ");
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}