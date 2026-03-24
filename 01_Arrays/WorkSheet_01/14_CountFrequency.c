/* Question: Frequency of each element
Question description: Write a C program to count the frequency of each element in an array.
Sample data:
Input: 1 2 2 3 3 3
Expected output:
1 occurs 1 time
2 occurs 2 times
3 occurs 3 times*/
#include<stdio.h>
void count_frequency(int *arr,int size)
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
        printf("%d occurs %d times\n",arr[i],count);
    }
}
int main()
{
    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array element: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    count_frequency(arr,size);

}