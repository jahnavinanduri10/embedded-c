/*Function Pointers in Structures
Goal
Learn how to include and use function pointers inside structures for callback mechanisms and dynamic behavior in embedded systems.
Activity
•	Define a structure containing function pointers.
•	Initialize it with different functions and invoke them.
•	Use this setup to simulate a hardware driver interface with different behavior implementations.
•	Demonstrate dynamic assignment and execution of function pointers based on a condition or input.
Tip: Use typedef for cleaner function pointer declarations.*/

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