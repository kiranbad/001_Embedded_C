/*14. Pairwise Reversal Challenges
Question:
Write a C program to reverse nodes in pairs.
Sample data:
List: 1 2 3 4 5
Expected output:
Reversed in pairs: 2 1 4 3 5*/
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

void pairReverse(struct node *head)
{
    while(head && head->next)
    {
        int temp = head->data;
        head->data = head->next->data;
        head->next->data = temp;

        head = head->next->next;
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

    pairReverse(head);

    printf("Reversed in pairs: ");
    printList(head);

    return 0;
}