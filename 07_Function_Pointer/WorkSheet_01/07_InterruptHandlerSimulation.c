/*7. Interrupt Handler Simulation
Log Session several interrupt handler functions (e.g., timerInterrupt, keyboardInterrupt, errorInterrupt).
Map these interrupt handlers using an array of function pointers.
Simulate interrupts by invoking appropriate interrupt handlers using their pointers based on interrupt numbers
entered by the user.*/
#include <stdio.h>
void timerinterrupt()
{
    printf("Timer Interrupt Occured\n");
}
void keyboardinterrupt()
{
    printf("KeyBoardInterrupt Occured\n");
}

void errorinterrupt()
{
    printf("ErrorInterrupt Occured\n");
}
int main()
{
    void (*interruptHandler[])(void) = {timerinterrupt, keyboardinterrupt, errorinterrupt};
    int option;
    printf("1.Timerinterrupt\n2.Keyboardinterrupt\n3.Errorinterrupt\n");
    printf("Enter the option: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        interruptHandler[0]();
        break;
    case 2:
        interruptHandler[1]();
        break;
    case 3:
        interruptHandler[2]();
        break;
    }
}