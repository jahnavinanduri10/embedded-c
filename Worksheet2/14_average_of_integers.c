#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3,b = 2,c = 1;
    int *ptr1 = &a,*ptr2 = &b, *ptr3 = &c;
    int *ptr[] = {ptr1,ptr2,ptr3};

    int sum  = 0;
    for(int i = 0;i < 3;i++)
        sum += *ptr[i];

    float avg = (float)sum / 3;
    printf("%.2f",avg);
}