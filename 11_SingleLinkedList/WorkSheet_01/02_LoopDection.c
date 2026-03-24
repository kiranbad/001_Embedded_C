/*2. Loop Detection Challenges
Question:
Write a C program to detect and remove a loop in a singly linked list.
Sample data:
List: 1 → 2 → 3 → 4 → 5 → (loop to 2)
Expected output:
Loop detected and removed.
List after removal: 1 2 3 4 5*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}Node;

int main()
{
    Node *head,*n1,*n2,*n3,*n4,*n5;
    Node *slow,*fast,*temp;

    /* Creating nodes */
    n1 = malloc(sizeof(Node));
    n2 = malloc(sizeof(Node));
    n3 = malloc(sizeof(Node));
    n4 = malloc(sizeof(Node));
    n5 = malloc(sizeof(Node));

    n1->data=1;
    n2->data=2;
    n3->data=3;
    n4->data=4;
    n5->data=5;

    /* Linking nodes */
    n1->link=n2;
    n2->link=n3;
    n3->link=n4;
    n4->link=n5;

    /* Creating loop: 5 -> 2 */
    n5->link=n2;

    head=n1;

    /* Detect loop */
    slow=head;
    fast=head;

    while(fast && fast->link)
    {
        slow=slow->link;
        fast=fast->link->link;

        if(slow==fast)
        {
            printf("Loop detected and removed\n");
            break;
        }
    }

    /* Remove loop */
    slow=head;
    while(slow->link!=fast->link)
    {
        slow=slow->link;
        fast=fast->link;
    }

    fast->link=NULL;

    /* Print list */
    printf("List after removal: ");
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }

    return 0;
}