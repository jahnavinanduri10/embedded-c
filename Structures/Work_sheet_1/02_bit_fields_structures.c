#include <stdio.h>

struct status_register
{
    unsigned error : 1;
    unsigned ready : 1;
    unsigned mode :  2;
    unsigned reserved : 4;
};

int main()
{
    struct status_register reg = {0};

    reg.error = 1;
    reg.ready = 1;
    reg.mode = 2;

    printf("Initial values: Error: %d, Ready: %d, Mode: %d\n",reg.error,reg.ready,reg.mode);

    reg.error = !reg.error;
    reg.ready = !reg.ready;

    printf("Toggled: Error: %d, Ready: %d, Mode: %d\n",reg.error,reg.ready,reg.mode);
}