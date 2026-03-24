/*Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.
Input: {"John", "Alice", "Bob"}
Output: {"Alice", "Bob", "John"}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char *arr[]={"John","Alice","Bob"};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                char *temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%s ",arr[i]);
    }

}