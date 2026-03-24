/*15. Block Reversal Variants
Question:
Write a C program to reverse nodes in blocks of size k.
Sample data:
List: 1 2 3 4 5 6
k = 3
Expected output:
Reversed: 3 2 1 6 5 4*/
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

struct node* reverseK(struct node *head, int k)
{
    struct node *prev = NULL, *curr = head, *next = NULL;
    int count = 0;

    while(curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next)
        head->next = reverseK(next, k);

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

    int k = 3;

    head = reverseK(head, k);

    printf("Reversed: ");
    printList(head);

    return 0;
}