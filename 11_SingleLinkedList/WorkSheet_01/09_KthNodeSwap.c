/*9. Kth Node Swapping Variants
Question:
Write a C program to swap Kth node from beginning and end.
Sample data:
List: 1 2 3 4 5
k = 2
Expected output:
Swapped list: 1 4 3 2 5*/

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

int main()
{
    struct node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    int k = 2, n = 0;
    struct node *temp = head;

    while(temp)
    {
        n++;
        temp = temp->next;
    }

    struct node *a = head, *b = head;

    for(int i = 1; i < k; i++)
        a = a->next;

    for(int i = 1; i < n - k + 1; i++)
        b = b->next;

    int t = a->data;
    a->data = b->data;
    b->data = t;

    printf("Swapped list: ");
    printList(head);

    return 0;
}