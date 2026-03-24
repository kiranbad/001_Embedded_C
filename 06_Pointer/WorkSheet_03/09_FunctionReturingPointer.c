/*9. Function Returning Pointer to Fixed-Size Array
Goal: Implement a function that returns a pointer to a fixed-size calibration data array.
Activity:
Use typedef to declare a pointer to an array of 10 integers:
typedef int (*CalibArrayPtr)[10];
Log Session a function that returns a pointer to a static array of calibration values:
CalibArrayPtr get_calibration_data(void);
From the calling function, access calibration data via the returned pointer.*/
#include <stdio.h>

typedef int (*CalibArrayPtr)[10];

CalibArrayPtr get_calibration_data(void)
{
    static int calib[10] = {10,20,30,40,50,60,70,80,90,100};
    return &calib;
}

int main()
{
    CalibArrayPtr ptr;

    ptr = get_calibration_data();

    printf("Calibration values:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", (*ptr)[i]);
    }

    return 0;
}