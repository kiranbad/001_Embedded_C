/*9. Dynamic Logging Mechanism
Implement three logging functions (consoleLog, fileLog, networkLog) with a common signature.
Allow the program to select the appropriate logging method dynamically through function pointers.
Demonstrate switching between logging methods at runtime based on user input.*/
#include<stdio.h>
void (*currentlog)(void);
void consolelog();
void filelog();
void networklog();
void consolelog()
{
    int choice;
    printf("ConsoleLog.\n");
    printf("1.FileLog\n2.NetworkLog\n");
    printf("Enter choice.\n");
    scanf("%d",&choice);
    if(choice==1)
    currentlog=filelog;
    else if(choice==2)
    currentlog=networklog;

}
void filelog()
{
    int choice;
    printf("FileLog.\n");
    printf("1.Consolelog\n2.NetworkLog\n");
    printf("Enter choice.\n");
    scanf("%d",&choice);
    if(choice==1)
    currentlog=consolelog;
    else if(choice==2)
    currentlog=networklog;
}
void networklog()
{
    int choice;
    printf("NetworkLog.\n");
    printf("1.FileLog\n2.Exit\n");
    printf("Enter choice.\n");
    scanf("%d",&choice);
    if(choice==1)
    currentlog=filelog;
    else if(choice==2)
    currentlog=NULL;
}

int main()
{
    currentlog=consolelog;
    while(currentlog!=NULL)
    {
        currentlog();
    }

}