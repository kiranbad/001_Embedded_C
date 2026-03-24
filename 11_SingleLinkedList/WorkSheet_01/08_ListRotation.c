/*8. List Rotation Challenges
Question:
Write a C program to rotate a linked list to the right by k places.
Sample data:
List: 1 3 4 7 9
k = 2
Expected output:
Rotated list: 4 7 9 1 3*/
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

void printList(struct node *head)
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

struct node* rotate(struct node *head, int k)
{
    int len = 1;
    struct node *temp = head;

    while(temp->next)
    {
        temp = temp->next;
        len++;
    }

    temp->next = head; // make circular

    k = k % len;
    int steps = len - k;

    temp = head;
    for(int i = 1; i < steps; i++)
        temp = temp->next;

    head = temp->next;
    temp->next = NULL;

    return head;
}

int main()
{
    struct node *head = newNode(1);
    head->next = newNode(3);
    head->next->next = newNode(4);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(9);

    int k = 2;

    head = rotate(head, k);

    printf("Rotated list: ");
    printList(head);

    return 0;
}

