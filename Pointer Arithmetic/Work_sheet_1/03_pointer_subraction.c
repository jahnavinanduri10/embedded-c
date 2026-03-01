#include <stdio.h>

int main()
{
    int arr[] = {5,10,15,20,25};
    int *p1 = &arr[4];
    int *p2 = &arr[1];

    printf("Distance between two pointers is %d",p1 - p2);
}