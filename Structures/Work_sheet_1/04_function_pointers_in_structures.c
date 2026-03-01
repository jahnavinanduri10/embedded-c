#include <stdio.h>

typedef void (*fptr)(int);

struct driver{
    fptr init;
    fptr operate;
    fptr shutdown;
};

void init_hardware(int id)
{
    printf("Initialising hardware %d\n",id);
}

void run_motor(int id)
{
    printf("Running motor %d\n",id);
}

void stop_motor(int id)
{
    printf("Stopping motor %d\n",id);
}

void toggle_led(int id)
{
    printf("Toggling LED on device %d\n",id);
}

int main()
{
    struct driver div = {init_hardware,run_motor,stop_motor};

    int id = 2;

    div.init(id);
    div.operate(id);

    div.operate = toggle_led;
    div.operate(id);

    div.shutdown(id);
}