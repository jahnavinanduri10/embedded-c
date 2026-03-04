#include <stdio.h>
#include <stdint.h>

struct Peripheral {
  uint8_t status;
  uint8_t control;
  uint16_t data;
};

int main()
{
    struct Peripheral arr[5];

    for(int i = 0;i < 5;i++)
    {
        arr[i].status = i+1;
        arr[i].control = i+2;
        arr[i].data = i+3;
    }

    struct Peripheral *ptr = arr;

    for(int i = 0;i < 5;i++)
    {
        printf("Index %d: status = %d, control = %d, data = %d\n",i,(ptr + i)->status,(ptr+i)->control,(ptr+i)->data);
    }
}