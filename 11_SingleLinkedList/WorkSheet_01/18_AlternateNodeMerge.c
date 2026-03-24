/*18. Alternate Node Merging Challenges
Question:
Write a C program to merge alternate nodes of two linked lists.
Sample data:
List1: 9 7 5
List2: 10 8 6
Expected output:
Merged list: 9 10 7 8 5 6*/
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

void mergeAlternate(struct node *l1, struct node *l2)
{
    while(l1 && l2)
    {
        struct node *n1 = l1->next;
        struct node *n2 = l2->next;

        l1->next = l2;
        l2->next = n1;

        l1 = n1;
        l2 = n2;
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
    struct node *l1 = newNode(9);
    l1->next = newNode(7);
    l1->next->next = newNode(5);

    struct node *l2 = newNode(10);
    l2->next = newNode(8);
    l2->next->next = newNode(6);

    mergeAlternate(l1, l2);

    printf("Merged list: ");
    printList(l1);

    return 0;
}