/*. Palindrome Check Variants
Question:
Write a C program to check if a singly linked list is a palindrome.
Sample data:
List: 1 2 2 1
Expected output:
Linked list is a palindrome.*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}Slist;
Slist *head=NULL;
void insert_at_first(int data)
{
    Slist *new=malloc(sizeof(Slist));
    if(new==NULL)
    return ;
    new->data=data;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
        return;
    }
    new->link=head;
    head=new;
    return;
}
void print_list()
{
    while(head)
    {
        printf("%d -> ",head->data);
        head=head->link;
    }
    printf("NULL\n");
}
int check_palindrome()
{
    int arr[10];
    int count=0;
    Slist *temp=head;
    while(temp)
    {
        arr[count++]=temp->data;
        temp=temp->link;
    }
    int start=0,end=count-1;
    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{

    insert_at_first(1);
    insert_at_first(2);
    insert_at_first(3);
    insert_at_first(2);
    insert_at_first(1);
    print_list();
    if(check_palindrome())
    printf("Palindrome.\n");
    else
    printf("Not Palindrome.\n");
}
