#include <stdio.h>
int main()
{
    int arr[] = {1,2,3};
    
    printf("Using arr[i]:\n");
    for (int i = 0;i < 3;i++)
        printf("%d ",arr[i]);

    printf("\nUsing *(arr+i):\n");
    for (int i = 0;i < 3;i++)
        printf("%d ",*(arr+i));
}