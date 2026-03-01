#include <stdio.h>
#include <stdlib.h>

void initState();
void runState();
void stopState();
void errorState();

void (*currentState)() = initState;

int input = 0;

void initState()
{
    printf("\nSystem initialising...\n");
    printf("Enter 1 to RUN,2 to ERROR: ");
    scanf("%d",&input);

    if(input == 1)
        currentState = runState;
    else    currentState = errorState;
}

void runState()
{
    printf("\nSystem running...\n");
    printf("Enter 0 to STOP, 2 to ERROR: ");
    scanf("%d",&input);

    if(input == 0) currentState = stopState;
    else if(input == 2) currentState = errorState;
}

void stopState()
{
    printf("\nSystem stopped\n");
    printf("Enter 1 to RUN again,3 to EXIT: ");
    scanf("%d",&input);

    if(input == 1) currentState = runState;
    else if(input == 3){
        printf("Exiting system\n");
        exit(0);
    }
}

void errorState()
{
    printf("\nSystem encountered an error\n");
    printf("Enter 0 to STOP, 1 to RUN: ");
    scanf("%d", &input);

    if (input == 0) currentState = stopState;
    else if (input == 1) currentState = runState;
}

int main()
{
    printf("   State machine example   \n");

    while(1)
    {
        currentState();
    }
}