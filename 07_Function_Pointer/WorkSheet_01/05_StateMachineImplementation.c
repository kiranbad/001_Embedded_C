/*5. State Machine Implementation
Implement a basic state machine (initState, runState, stopState, errorState) with each state represented
by a separate function.
Use function pointers to transition between states based on user input or internal conditions.
Demonstrate state transitions clearly in your program’s output.*/
#include <stdio.h>

// State function declarations
void initState();
void runState();
void stopState();
void errorState();

// Function pointer to hold current state
void (*currentState)();

void initState()
{
    int choice;
    printf("\nINIT STATE\n");
    printf("1. Run\n2. Error\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice == 1)
        currentState = runState;
    else
        currentState = errorState;
}

void runState()
{
    int choice;
    printf("\nRUN STATE\n");
    printf("1. Stop\n2. Error\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice == 1)
        currentState = stopState;
    else
        currentState = errorState;
}

void stopState()
{
    int choice;
    printf("\nSTOP STATE\n");
    printf("1. Init\n2. Exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice == 1)
        currentState = initState;
    else
        currentState = NULL;
}

void errorState()
{
    printf("\nERROR STATE\n");
    printf("Returning to INIT...\n");
    currentState = initState;
}

int main()
{
    currentState = initState;

    while(currentState != NULL)
    {
        currentState();
    }

    printf("\nState Machine Stopped\n");
    return 0;
}