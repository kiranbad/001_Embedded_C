/*3. Callback Function Array Processing
Define a function processArray that accepts an integer array, its size, and a callback function as arguments.
Implement callback functions (increment, doubleValue) that modify array elements in different ways.
Demonstrate invoking processArray with different callback functions.*/
#include<stdio.h>
void increment(int *num)
{
    (*num)++;
}

void doublevalue(int *num)
{
    *num=(*num)*2;
}
void processArray(int arr[],int size,void (*callback)(int *))
{
    for(int i=0; i<size; i++)
    {
        callback(&arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    processArray(arr,size,increment);
    printf("After increment : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    processArray(arr,size,doublevalue);
    printf("After double : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}