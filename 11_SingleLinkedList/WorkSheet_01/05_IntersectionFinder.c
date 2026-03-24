/*5. Intersection Finder Variants
Question:
Write a C program to find the intersection point of two singly linked lists.
Sample data:
List A: 1 2 → 3 4
List B: 5 → 3 4
Expected output:
Intersection found at node with data: 3*/
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

Node* find_intersection(Node *a, Node *b)
{
    Node *p = a;
    Node *q = b;

    while(p != q)
    {
        if(p == NULL)
            p = b;
        else
            p = p->next;

        if(q == NULL)
            q = a;
        else
            q = q->next;
    }

    return p;
}

int main()
{
    Node *n1=create_node(1);
    Node *n2=create_node(2);
    Node *n3=create_node(3);
    Node *n4=create_node(4);
    Node *n5=create_node(5);

    /* List A */
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    /* List B */
    n5->next = n3;

    Node *result = find_intersection(n1,n5);

    if(result)
        printf("Intersection found at node with data: %d\n",result->data);
    else
        printf("No intersection\n");

    return 0;
}