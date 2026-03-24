/*10. Linked List Sorting Challenges
Question:
Write a C program to sort a singly linked list using merge sort.
Sample data:
List: 2 3 1 7 5
Expected output:
Sorted list: 1 2 3 5 7*/
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

struct node* merge(struct node *a, struct node *b)
{
    if(a == NULL) return b;
    if(b == NULL) return a;

    struct node *result;

    if(a->data <= b->data)
    {
        result = a;
        result->next = merge(a->next, b);
    }
    else
    {
        result = b;
        result->next = merge(a, b->next);
    }

    return result;
}

void split(struct node *source, struct node **front, struct node **back)
{
    struct node *slow = source;
    struct node *fast = source->next;

    while(fast)
    {
        fast = fast->next;
        if(fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

void mergeSort(struct node **headRef)
{
    struct node *head = *headRef;
    struct node *a, *b;

    if(head == NULL || head->next == NULL)
        return;

    split(head, &a, &b);

    mergeSort(&a);
    mergeSort(&b);

    *headRef = merge(a, b);
}

int main()
{
    struct node *head = newNode(2);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(5);

    mergeSort(&head);

    printf("Sorted list: ");
    printList(head);

    return 0;
}