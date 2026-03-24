/*1. Pointer Declaration and Initialization
Goal: Declare pointers for various data types and initialize them properly to point to existing variables or dynamically allocated memory.
Use pointer arithmetic and typecasting appropriately.
Activity:
1. Declare pointers to different data types (int, float, char).
2. Dynamically allocate memory for these pointers.
3. Assign addresses of variables to pointers and access their values through the pointers.
4. Perform pointer arithmetic to move through allocated memory blocks.
5. Use typecasting to convert pointers between compatible types.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p1=malloc(sizeof(int));
    char *p2=malloc(sizeof(char));
    float *p3=malloc(sizeof(float));

    *p1=10;
    *p2='a';
    *p3=3.14;

    printf("Values using pointers:\n");
    printf("Int value = %d\n", *p1);
    printf("Char value = %c\n", *p2);
    printf("Float value = %f\n", *p3);

    int *arr=malloc(3*(sizeof(int)));
    arr[0]=100;
    arr[1]=200;
    arr[3]=300;
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+3));


    void *vp;
    vp=p1;
    printf("%d\n",*(int *)vp);

    vp=p2;
    printf("%c\n",*(char *)vp);

    vp=p3;
    printf("%f\n",*(float*)vp);

    free(p1);
    free(p2);
    free(p3);


}