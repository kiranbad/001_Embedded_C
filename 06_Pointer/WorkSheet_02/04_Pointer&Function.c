/*4. Pointer and Function
Goal: Use pointers to pass variables or arrays to functions so that the function can modify the original data.
Activity:
1. Write a function that takes pointers as parameters to swap two integer variables.
2. Log Session a function that modifies the elements of an array via a pointer.
3. Pass a pointer to a function to update the contents of a structure or a dynamically allocated memory block.*/

#include<stdio.h>
struct student{
    int roll;
    int age;
};
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void modify(int *arr,int n)
{
    for(int i=0; i<n; i++)
    {
        (*(arr+i))++;
    }
}
void modify_struct(struct student *s1)
{
    s1->age=25;
    s1->roll=32;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("After Swapping\na=%d\nb=%d\n",a,b);
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    modify(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    struct student s1;
    s1.age=10;
    s1.roll=30;
    modify_struct(&s1);
    printf("Age=%d\nRoll No=%d",s1.age,s1.roll);
}