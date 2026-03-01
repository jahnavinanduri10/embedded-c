#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter no of integers: ");
    scanf("%d",&n);

    int *arr = calloc(sizeof(int),n);

    for(int i = 0;i < n;i++)
        printf("%d",*(arr+i));

    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&(*(arr+i)));
printf("\n");
    for(int i = 0;i < n;i++)
        printf("%d",*(arr+i));

    free(arr);
}