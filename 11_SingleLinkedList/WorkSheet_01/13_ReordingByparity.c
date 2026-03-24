/*13. Reordering by Parity Challenges
Question:
Write a C program to place all even-numbered nodes after odd-numbered nodes.
Sample data:
List: 1 2 3 4 5 6
Expected output:
Reordered list: 1 3 5 2 4 6*/
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

void reorder(struct node *head)
{
    struct node *odd = NULL, *even = NULL;
    struct node *oddTail = NULL, *evenTail = NULL;

    while(head)
    {
        if(head->data % 2 != 0)
        {
            if(odd == NULL)
                odd = oddTail = head;
            else
            {
                oddTail->next = head;
                oddTail = head;
            }
        }
        else
        {
            if(even == NULL)
                even = evenTail = head;
            else
            {
                evenTail->next = head;
                evenTail = head;
            }
        }
        head = head->next;
    }

    oddTail->next = even;
    evenTail->next = NULL;

    struct node *temp = odd;
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
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

    printf("Reordered list: ");
    reorder(head);

    return 0;
}