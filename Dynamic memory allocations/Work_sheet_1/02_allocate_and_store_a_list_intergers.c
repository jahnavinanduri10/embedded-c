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