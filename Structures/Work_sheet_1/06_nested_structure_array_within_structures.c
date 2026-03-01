#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
    unsigned char header[4];
    struct{
        int sendor_id;
        int data[10];
        int count;
    }playload;
}Packet;

typedef struct{
    int id;
    Packet packet;
}Device;

int main()
{
    Device dev = {.id = 1};

    memcpy(dev.packet.header,"HEAD",4);

    dev.packet.playload.sendor_id = 100;
    dev.packet.playload.count = 3;
    for(int i = 0;i < dev.packet.playload.count;i++)
        dev.packet.playload.data[i] = 12 + i;

    printf("Device ID: %d\n",dev.id);
    printf("Header: %.4s\n",dev.packet.header);
    printf("Sensor ID: %d\n",dev.packet.playload.sendor_id);
    printf("Data samples: ");
    for(int i = 0;i < dev.packet.playload.count;i++)
            printf("%d ",dev.packet.playload.data[i]);
}