/*4. Copy with Random Pointers Challenges
Question:
Write a C program to create a deep copy of a singly linked list where each node has a random pointer.
Sample data:
List: 1 2 3 5 7
Random pointers: 1→3, 2→5, 3→7, 5→1, 7→3
Expected output:
New list with same data and random pointers correctly mapped.*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *random;
}Node;

Node* create_node(int data)
{
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->next = NULL;
    new->random = NULL;
    return new;
}

void print_list(Node *head)
{
    while(head)
    {
        printf("Node %d -> Random %d\n", head->data,
               head->random ? head->random->data : -1);
        head = head->next;
    }
}

Node* copy_list(Node *head)
{
    Node *temp = head;

    /* Step 1: insert copied nodes */
    while(temp)
    {
        Node *copy = create_node(temp->data);
        copy->next = temp->next;
        temp->next = copy;
        temp = copy->next;
    }

    /* Step 2: copy random pointers */
    temp = head;
    while(temp)
    {
        if(temp->random)
            temp->next->random = temp->random->next;

        temp = temp->next->next;
    }

    /* Step 3: separate the lists */
    Node *new_head = head->next;
    temp = head;

    while(temp)
    {
        Node *copy = temp->next;
        temp->next = copy->next;

        if(copy->next)
            copy->next = copy->next->next;

        temp = temp->next;
    }

    return new_head;
}

int main()
{
    Node *n1=create_node(1);
    Node *n2=create_node(2);
    Node *n3=create_node(3);
    Node *n4=create_node(5);
    Node *n5=create_node(7);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    /* random pointers */
    n1->random=n3;
    n2->random=n4;
    n3->random=n5;
    n4->random=n1;
    n5->random=n3;

    Node *copy = copy_list(n1);

    printf("Copied list:\n");
    print_list(copy);

    return 0;
}