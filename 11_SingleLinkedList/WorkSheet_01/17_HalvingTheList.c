/*17. Halving the List Challenges
Question:
Write a C program to split a list into two halves.
Sample data:
List: 1 2 3 4 5 6
Expected output:
First half: 1 2 3
Second half: 4 5 6*/
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

void splitList(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;

    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct node *second = slow->next;
    slow->next = NULL;

    printf("First half: ");
    printList(head);

    printf("\nSecond half: ");
    printList(second);
}

int main()
{
    struct node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(6);

    splitList(head);

    return 0;
}