#include <stdio.h>

typedef enum{
    TIMER_INTERRUPT = 0,
    KEYBOARD_INTERRUPT,
    ERROR_INTERRUPT,
    INTERRUPT_COUNT
}InterruptType;

void timer_interrupt(void)
{
    printf("Timer interrupt handled\n");
}

void keyboard_interrupt(void)
{
    printf("Keyboard interrupt handled\n");
}

void error_interrupt(void)
{
    printf("Error interrupt handled\n");
}

void (*interruptHandlers[INTERRUPT_COUNT])(void) = {
    [TIMER_INTERRUPT] = timer_interrupt,
    [KEYBOARD_INTERRUPT] = keyboard_interrupt,
    [ERROR_INTERRUPT] = error_interrupt
};

void handleInterrupt(int interruptnumber){
    if(interruptnumber >= 0 && interruptnumber < INTERRUPT_COUNT)
        interruptHandlers[interruptnumber]();
    else
        printf("Invalid interrupt number");
}

int main()
{
    int interruptnumber;

    printf("Enter interrupt number (0-Timer, 1-Keyboard, 2-Error, -1 to exit):\n");

    while(1)
    {
        printf("> ");
        scanf("%d",&interruptnumber);

        if(interruptnumber == -1)
            break;

        handleInterrupt(interruptnumber);
    }
}