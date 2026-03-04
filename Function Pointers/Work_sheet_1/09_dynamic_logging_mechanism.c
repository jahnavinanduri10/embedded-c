#include <stdio.h>

typedef void (*LoggerFunc)(char*);
void consoleLog(char *str)
{
    printf("Console Log: %s\n", str);
}

void fileLog(char *msg) {
    printf("File Log: %s\n", msg);
}

void networkLog(char *msg) {
    printf("Network Log: %s\n", msg);
}

typedef enum {
    CONSOLE = 0,
    FILE_LOG,
    NETWORK,
    LOGGER_COUNT
} LoggerType;

LoggerFunc loggers[LOGGER_COUNT] = {
    consoleLog,
    fileLog,
    networkLog
};

LoggerFunc currentLogger = NULL;

void logMessage(char *msg) {
    if (currentLogger) {
        currentLogger(msg);
    }
}

int main()
{
    int choice;
    char *message = "system started";

    printf("Select logging method:\n");
    printf("0 - COnsole\n");
    printf("1 - File\n");
    printf("2 - Network\n");

    while(1)
    {
        printf("\nEnter choice (-1 to exit):");
        scanf("%d",&choice);

        if(choice == -1)
            break;
        if(choice >= 0 && choice < LOGGER_COUNT)
        {
            currentLogger = loggers[choice];
            logMessage(message);        
        }
        else
            printf("Invalid choice\n");
    }
}