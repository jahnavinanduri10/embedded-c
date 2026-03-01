#include <stdio.h>
#define SWAP(a,b) do{\
                        a = a^b;\
                        b = a^b;\
                        a = a^b;\
                    }while(0)

int main()
{
    int arr[4] = {100,200,300,400};

    for(int i = 0;i < 2;i++)
    {
        SWAP(*(arr+i),*(arr+4-i-1));
    }
    printf("Reversed array:\n");
    for (int i = 0; i < 4; i++)
        printf("%d ", *(arr+i));
}