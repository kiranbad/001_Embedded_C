/*Exercise 9: Log Session a Linked List with 3 Nodes
Goal: Apply dynamic memory to build a simple linked list.
Activity:
Define a struct for a node with data and next.
Use malloc to create 3 nodes dynamically.
Link the nodes manually.
Traverse and print the list.
Free all nodes after traversal.*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *second, *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}