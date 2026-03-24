/*2. Sorting Algorithms Selector
Implement three sorting functions (bubbleSort, selectionSort, insertionSort) that sort an integer array.
Store pointers to these sorting functions in an array of function pointers.
Prompt the user to choose a sorting method, and use the selected function pointer to sort a user-provided integer
array.*/
#include <stdio.h>
void bubblesort(int *arr, int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
void selectionsort(int *arr, int size)
{
    int si,temp;
    for(int i=0; i<size-1; i++)
    {
        si=i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[si])
            {
                si=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[si];
        arr[si]=temp;
        
    }
}
void insertionsort(int *arr, int size)
{
    int i, j, key;

    for(i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    void (*fptr[])(int *, int) = {bubblesort, selectionsort, insertionsort};
    printf("1.BubbleSort\n2.SelectionSort\n3.Insertionsort\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        fptr[0](arr,size);
        break;
    case 2:
        fptr[1](arr,size);
        break;
    case 3:
        fptr[2](arr,size);
        break;
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }


}