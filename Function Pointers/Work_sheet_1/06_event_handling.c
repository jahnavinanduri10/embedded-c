#include <stdio.h>

typedef enum{
    buttonPressEvent,
    sensorTriggerEvent,
    EVENT_COUNT
}EventType;

void onButtonPress(){
    printf("Button press event handled\n");
}

void onSensorTrigger(){
    printf("Sensor trigger event handled\n");
}

void (*eventHandlers[EVENT_COUNT])() = {
    [buttonPressEvent] = onButtonPress,
    [sensorTriggerEvent] = onSensorTrigger
};

void triggerEvent(EventType event){
    if(event < EVENT_COUNT){
        eventHandlers[event]();
    }
}

int main()
{
    triggerEvent(buttonPressEvent);
    triggerEvent(sensorTriggerEvent);
}