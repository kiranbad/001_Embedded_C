/*18. Replace Switch-Case with Function Pointer Table
Simulate a command-based application where each command is represented by a number.
Instead of using a large switch-case block to handle commands, create a function pointer table.
Use the input command number as an index to call the corresponding handler function via the function pointer
table.*/
#include <stdio.h>

/* Command functions */
void command1()
{
    printf("Command 1 executed: Display message\n");
}

void command2()
{
    printf("Command 2 executed: Perform calculation\n");
}

void command3()
{
    printf("Command 3 executed: Exit operation\n");
}

int main()
{
    int cmd;

    /* Function pointer table */
    void (*commands[3])() = {command1, command2, command3};

    printf("Enter command number (1-3): ");
    scanf("%d", &cmd);

    switch(cmd)
    {
        case 1:
            commands[0]();
            break;

        case 2:
            commands[1]();
            break;

        case 3:
            commands[2]();
            break;

        default:
            printf("Invalid command\n");
    }

    return 0;
}