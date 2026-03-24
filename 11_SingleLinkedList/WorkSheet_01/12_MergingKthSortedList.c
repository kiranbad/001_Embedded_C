/*12. Merging K Sorted Lists Challenges
Question:
Write a C program to merge K sorted linked lists.
Sample data:
List-1: 10 20 50
List-2: 30 40 60
List-3: 10 70 100
Expected output:
Merged list: 10 10 20 30 40 50 60 70 100*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* newNode(int val)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

struct node* merge(struct node *a, struct node *b)
{
    if(a == NULL) return b;
    if(b == NULL) return a;

    if(a->data < b->data)
    {
        a->next = merge(a->next, b);
        return a;
    }
    else
    {
        b->next = merge(a, b->next);
        return b;
    }
}

void printList(struct node *head)
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    struct node *l1 = newNode(10);
    l1->next = newNode(20);
    l1->next->next = newNode(50);

    struct node *l2 = newNode(30);
    l2->next = newNode(40);
    l2->next->next = newNode(60);

    struct node *l3 = newNode(10);
    l3->next = newNode(70);
    l3->next->next = newNode(100);

    struct node *result = merge(l1, l2);
    result = merge(result, l3);

    printf("Merged list: ");
    printList(result);

    return 0;
}