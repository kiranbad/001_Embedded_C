/*Find the frequency of each element
Question description:
Write a C program to find the frequency of each element in the array.
Sample data:
Input: 10 20 10 30 20 20 10 10
Expected output:
10: 4 20: 3 30: 1*/
#include<stdio.h>
void find_frequency(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        int count=1;
        if(arr[i]==-1)
        continue;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        printf("%d: %d\n", arr[i], count);
    }

    
}

int main()
{
    int size,num;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    find_frequency(arr,size);

}