#include <stdio.h>
#include <stdarg.h>

void sort_numbers(int count, ...)
{
    int arr[count];
    va_list ap;
    va_start(ap,count);

    for (int i = 0;i < count;i++)
        arr[i] = va_arg(ap,int);

    va_end(ap);

    for(int i = 0;i < count - 1;i++)
    {
        for(int j = 0;j < count - i - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0;i < count;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    sort_numbers(5,9,5,7,1,3);
    sort_numbers(3,1,-2,0);
}