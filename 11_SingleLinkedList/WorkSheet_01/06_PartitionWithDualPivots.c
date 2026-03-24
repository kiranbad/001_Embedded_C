/*6. Partitioning with Dual Pivots
Question:
Write a C program to partition a linked list around a value x.
Sample data:
List: 3 5 7 5 9 2 1
x = 5
Expected output:
Reordered list: 3 2 1 5 7 5 9*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node* create_node(int data)
{
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->next = NULL;
    return new;
}

void print_list(Node *head)
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

Node* partition(Node *head, int x)
{
    Node *less=NULL,*equal=NULL,*greater=NULL;
    Node *l=NULL,*e=NULL,*g=NULL;

    while(head)
    {
        if(head->data < x)
        {
            if(!less)
                less = l = head;
            else
            {
                l->next = head;
                l = head;
            }
        }
        else if(head->data == x)
        {
            if(!equal)
                equal = e = head;
            else
            {
                e->next = head;
                e = head;
            }
        }
        else
        {
            if(!greater)
                greater = g = head;
            else
            {
                g->next = head;
                g = head;
            }
        }

        head = head->next;
    }

    if(g) g->next = NULL;

    if(e) e->next = greater;
    if(l) l->next = equal ? equal : greater;

    return less ? less : (equal ? equal : greater);
}

int main()
{
    Node *head = create_node(3);
    head->next = create_node(5);
    head->next->next = create_node(7);
    head->next->next->next = create_node(5);
    head->next->next->next->next = create_node(9);
    head->next->next->next->next->next = create_node(2);
    head->next->next->next->next->next->next = create_node(1);

    int x = 5;

    printf("Original list:\n");
    print_list(head);

    head = partition(head, x);

    printf("Reordered list:\n");
    print_list(head);

    return 0;
}