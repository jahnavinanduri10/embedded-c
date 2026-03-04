#include <stdio.h>

void init(void)
{
    printf("Initialising...\n");
}

void start(void)
{   
    printf("Starting...\n");
}

void stop(void)
{
    printf("Stopping...\n");
}

int main()
{
    void (*cmd_table[])(void) = {init,start,stop};

    for(int i = 0;i < 3;i++)
        cmd_table[i]();

}