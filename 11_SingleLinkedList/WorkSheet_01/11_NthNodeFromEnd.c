/*11. Nth Node from End Variants
Question:
Write a C program to retrieve the nth node from the end.
Sample data:
List: 1 3 5 11
n = 3
Expected output:
Result: 3*/
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

int nthFromEnd(struct node *head, int n)
{
    struct node *p1 = head, *p2 = head;

    for(int i = 0; i < n; i++)
        p2 = p2->next;

    while(p2 != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }

    return p1->data;
}

int main()
{
    struct node *head = newNode(1);
    head->next = newNode(3);
    head->next->next = newNode(5);
    head->next->next->next = newNode(11);

    int n = 3;

    printf("Result: %d", nthFromEnd(head, n));

    return 0;
}