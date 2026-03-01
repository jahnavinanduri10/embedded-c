#include <stdio.h>

int main()
{
    int arr[] = {5,10,15,20,25};
    int *p1 = &arr[2];
    int *p2 = &arr[4];

    if(p1 < p2)
        printf("p1 points to a smaller index than p2\n");
    else if(p1 > p2)
        printf("p2 points to a smaller index than p1\n");
    else
        printf("p1 and p2 points to both index");
}
