/*Bit-fields in Structures
Goal
Learn to define and use bit-fields to manage individual bits for hardware register simulation.
Activity
•	Log Session a structure using bit-fields to represent an 8-bit status register.
•	Assign values to specific flags.
•	Log Session a mock register with error, ready, and mode bits.
•	Write code to toggle specific flags without using bitwise operators.
•	Reflect on how compilers handle ordering and alignment of bit-fields.
Tip: Bit-fields may behave differently on different compilers—don't assume portability.*/


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