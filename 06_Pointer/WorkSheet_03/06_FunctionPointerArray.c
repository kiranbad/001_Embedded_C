/*6. Function Pointer Arrays for Command Execution
Goal: Log Session an embedded command interface using an array of function pointers.
Activity:
Declare three functions representing device operations:
void init(void);
void start(void);
void stop(void);
Log Session an array of function pointers referencing these functions:
void (*cmd_table[])(void) = {init, start, stop};
Use an index or enum value to invoke the appropriate function via the array.*/

#include<stdio.h>
void init(void)
{
    printf("Device Initiatated.\n");
}
void start(void)
{
    printf("Device Started.\n");
}
void stop(void)
{
    printf("Device Stopped.\n");
}
int main()
{
    int cmd;
    void (*cmd_table[])(void)={init,start,stop};
    printf("0.Init.\n1.Start.\n2.Stop.\n");
    printf("Enter your choice: ");
    scanf("%d",&cmd);
    if(cmd>=0 && cmd <=2)
    {
        cmd_table[cmd]();
    }
    else
    {
        printf("Invalid command.\n");
    }
}