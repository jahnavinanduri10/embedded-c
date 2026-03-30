/*: Reallocate an Array Dynamically
Goal: Use realloc to extend an array as needed.
Activity:
•	Allocate memory for 2 integers.
•	Ask the user for values.
•	Then resize the array to 5 integers using realloc.
•	Accept more values into the resized array.
•	Print all values.
•	Free the memory at the end.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int*)malloc(2 * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Enter 2 integers: ");
    for(int i = 0;i < 2;i++)
        scanf("%d",&arr[i]);

    arr = (int*)realloc(arr,5*sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Enter 3 integers: ");
    for(int i = 2;i < 5;i++)
        scanf("%d",&arr[i]);

    for(int i = 0;i < 5;i++)
        printf("%d ",arr[i]);

    free(arr);
}