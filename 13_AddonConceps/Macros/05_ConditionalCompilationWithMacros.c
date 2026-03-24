/*Conditional Compilation with Macros*/
#define DEBUG

#include <stdio.h>

int main() {
#ifdef DEBUG
    printf("Debug mode is ON\n");
#endif
    printf("Program is running\n");
    return 0;
}