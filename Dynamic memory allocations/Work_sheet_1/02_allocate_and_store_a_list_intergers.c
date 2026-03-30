/*Allocate and Store a List of Integers
Goal: Practice allocating memory for an array of integers.
Activity:
•	Ask the user to enter the number of integers.
•	Allocate memory dynamically using malloc based on input.
•	Use a loop to take integer inputs into the allocated array.
•	Display the entered values.
•	Free the allocated memory.
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of integers: ");
    scanf("%d",&n);

    int *arr = malloc(sizeof(int) * n);

    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&(*(arr+i)));

    for(int i = 0;i < n;i++)
        printf("%d",*(arr+i));

    free(arr);
}