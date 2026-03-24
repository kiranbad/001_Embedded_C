/*11. Pointer and Linked List
Goal: Implement a singly linked list using pointers for node management and dynamic memory allocation.
Activity:
1. Define a node structure with data and next pointer.
2. Log Session functions to add nodes at the beginning, end, or middle of the list using pointers.
3. Traverse the list using pointers to access and print data.
4. Delete nodes and free memory dynamically*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}Slist;
Slist *head=NULL;
int insert_at_first(int data)
{
    Slist *new=malloc(sizeof(Slist));
    if(new==NULL)
    {
        return 0;
    }
    new->data=data;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
        return 1;
    }

    new->link=head;
    head=new;
    return 1;

}
int print_list()
{
    if(head==NULL)
    {
        printf("List is Empty.\n");
        return 0;
    }
    Slist *temp=head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
    
}
int main()
{
    insert_at_first(10);
    insert_at_first(20);
    insert_at_first(30);
    insert_at_first(40);
    print_list();
}