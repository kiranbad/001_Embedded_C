/*20. Adjacent Node Swapping Variants
Question:
Write a C program to swap every two adjacent nodes.
Sample data:
List: 1 2 3 4 5
Expected output:
Swapped list: 2 1 4 3 5*/
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

void swapPairs(struct node *head)
{
    struct node *temp = head;

    while(temp && temp->next)
    {
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;

        temp = temp->next->next;
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
    struct node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    swapPairs(head);

    printf("Swapped list: ");
    printList(head);

    return 0;
}