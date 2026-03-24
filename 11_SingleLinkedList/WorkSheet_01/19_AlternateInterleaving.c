/*19. Alternate Interleaving Challenges
Question:
Write a C program to interleave two lists alternatively.
Sample data:
List1: 1 3 5
List2: 2 4 6
Expected output:
Result: 1 2 3 4 5 6*/
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

struct node* interleave(struct node *l1, struct node *l2)
{
    struct node *head = l1;

    while(l1 && l2)
    {
        struct node *t1 = l1->next;
        struct node *t2 = l2->next;

        l1->next = l2;
        if(t1 == NULL)
            break;

        l2->next = t1;

        l1 = t1;
        l2 = t2;
    }

    return head;
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
    struct node *l1 = newNode(1);
    l1->next = newNode(3);
    l1->next->next = newNode(5);

    struct node *l2 = newNode(2);
    l2->next = newNode(4);
    l2->next->next = newNode(6);

    struct node *result = interleave(l1, l2);

    printf("Result: ");
    printList(result);

    return 0;
}