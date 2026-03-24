/*6. Event Handling System
Define events such as buttonPressEvent, sensorTriggerEvent.
Implement handler functions for these events.
Log Session an array of function pointers mapping each event to its corresponding handler function.
Simulate event triggers, calling the appropriate handler through function pointers.*/
#include<stdio.h>
void buttonpressevent()
{
    printf("Button Pressed.\n");
}
void sensortriggerevent()
{
    printf("Sensor Trigger Event.\n");
}

int main()
{
    void (*eventhandler[])(void)={buttonpressevent,sensortriggerevent};
    int option;
    printf("1.Button Press.\n2.SensorTriggerEvent.\n");
    scanf("%d",&option);
    if(option==1)
    {
        eventhandler[0]();
    }
    else if(option==2)
    {
        eventhandler[1]();
    }
    else
    {
        printf("Invalid Event.\n");
    }
}