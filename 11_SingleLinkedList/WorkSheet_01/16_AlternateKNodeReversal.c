/*16. Alternate K-Node Reversal Challenges
Question:
Write a C program to reverse alternate k nodes.
Sample data:
List: 1 2 3 4 5 6 7 8
k = 2
Expected output:
Reversed: 2 1 3 4 6 5 7 8*/
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

struct node* reverseAltK(struct node* head, int k)
{
    struct node *curr = head, *prev = NULL, *next = NULL;
    int count = 0;

    // Reverse first k nodes
    while(curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Connect last node of reversed block
    if(head)
        head->next = curr;

    // Skip next k nodes
    count = 0;
    while(curr && count < k-1)
    {
        curr = curr->next;
        count++;
    }

    // Recursive call
    if(curr)
        curr->next = reverseAltK(curr->next, k);

    return prev;
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
    head->next->next->next->next->next = newNode(6);
    head->next->next->next->next->next->next = newNode(7);
    head->next->next->next->next->next->next->next = newNode(8);

    int k = 2;

    head = reverseAltK(head, k);

    printf("Reversed: ");
    printList(head);

    return 0;
}