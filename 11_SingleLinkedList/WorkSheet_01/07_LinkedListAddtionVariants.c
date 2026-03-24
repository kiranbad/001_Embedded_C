/*7. Linked List Addition Variants
Question:
Write a C program to add two numbers represented by linked lists.
Sample data:
List 1: 8 7 9 2
List 2: 2 1 2 3
Expected output:
Result: 0 9 1 6 (carry handled)*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* newNode(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void printList(struct node* head)
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

struct node* addLists(struct node* l1, struct node* l2)
{
    struct node *result = NULL, *last = NULL;
    int carry = 0;

    while(l1 || l2 || carry)
    {
        int sum = carry;

        if(l1)
        {
            sum += l1->data;
            l1 = l1->next;
        }

        if(l2)
        {
            sum += l2->data;
            l2 = l2->next;
        }

        struct node* temp = newNode(sum % 10);
        carry = sum / 10;

        if(result == NULL)
            result = last = temp;
        else
        {
            last->next = temp;
            last = temp;
        }
    }

    return result;
}

int main()
{
    struct node *l1 = newNode(8);
    l1->next = newNode(7);
    l1->next->next = newNode(9);
    l1->next->next->next = newNode(2);

    struct node *l2 = newNode(2);
    l2->next = newNode(1);
    l2->next->next = newNode(2);
    l2->next->next->next = newNode(3);

    struct node* res = addLists(l1, l2);

    printf("Result: ");
    printList(res);

    return 0;
}