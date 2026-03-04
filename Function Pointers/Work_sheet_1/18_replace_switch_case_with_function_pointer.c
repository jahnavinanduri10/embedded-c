#include <stdio.h>
#define COMMAND_COUNT 4

typedef void (*CommandHandler)(void);

void helpCommand(void) {
    printf("Help command executed\n");
}

void startCommand(void) {
    printf("Start command executed\n");
}

void stopCommand(void) {
    printf("Stop command executed\n");
}

void statusCommand(void) {
    printf("Status command executed\n");
}

void invalidCommand(void) {
    printf("Invalid command number\n");
}

CommandHandler commandTable[COMMAND_COUNT] = {
    helpCommand,    
    startCommand,  
    stopCommand,    
    statusCommand   
};

void executeCommand(int cmd) {
    if (cmd >= 0 && cmd < COMMAND_COUNT) {
        commandTable[cmd]();   
    } else {
        invalidCommand();
    }
}

int main() {
    int command;

    printf("Enter command number (0-3): ");
    scanf("%d", &command);

    executeCommand(command);

    return 0;
}