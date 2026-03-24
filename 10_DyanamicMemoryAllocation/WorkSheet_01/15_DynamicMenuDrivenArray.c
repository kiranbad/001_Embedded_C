/*Exercise 15: Dynamic Menu-Driven Array
Goal: Handle operations on a dynamic array with growing size.
Activity:
Start with an empty array.
Provide a menu with options: Add element, Display, Exit.
Use realloc each time user adds an element.
Print array contents.
Free memory on exit.*/
#include <stdio.h>
#include <stdlib.h>
int *add_element(int *arr, int *size)
{
    int value;
    printf("Enter the value to add: ");
    scanf("%d", &value);
    int *temp = realloc(arr, ((*size) + 1) * sizeof(int));
    arr = temp;
    arr[*size] = value;
    (*size)++;
    return arr;
}
void display_elements(int *arr, int size)
{
    printf("Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int *arr = NULL;
    int op, size = 0;

    while (1)
    {
        printf("1.Add Element\n2.Display\n3.Exit\n");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
            arr=add_element(arr,&size);
            break;
            case 2:display_elements(arr,size);
            break;
        }

    }
}