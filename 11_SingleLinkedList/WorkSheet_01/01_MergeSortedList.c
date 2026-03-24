/*1. Merge Sorted Lists Challenges
Question:
Write a C program to merge two sorted singly linked lists into a single sorted linked list.
Sample data:
List 1: 1 3 5 7
List 2: 2 4 6
Expected output:
Merged list: 1 2 3 4 5 6 7*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} Slist;

Slist *head1 = NULL; // List 1
Slist *head2 = NULL; // List 2

int insert_at_end_list1(int data) {
    Slist *newNode = malloc(sizeof(Slist));
    if (!newNode) return 0; // FAILURE
    newNode->data = data;
    newNode->link = NULL;

    if (!head1) {
        head1 = newNode;
        return -1; // SUCCESS
    }

    Slist *temp = head1;
    while (temp->link) temp = temp->link;
    temp->link = newNode;
    return -1;
}

int insert_at_end_list2(int data) {
    Slist *newNode = malloc(sizeof(Slist));
    if (!newNode) return 0;
    newNode->data = data;
    newNode->link = NULL;

    if (!head2) {
        head2 = newNode;
        return -1;
    }

    Slist *temp = head2;
    while (temp->link) temp = temp->link;
    temp->link = newNode;
    return -1;
}

Slist* merge_lists(Slist* l1, Slist* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    Slist *merged = NULL, *tail = NULL;

    if (l1->data < l2->data) {
        merged = tail = l1;
        l1 = l1->link;
    } else {
        merged = tail = l2;
        l2 = l2->link;
    }

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->link = l1;
            tail = l1;
            l1 = l1->link;
        } else {
            tail->link = l2;
            tail = l2;
            l2 = l2->link;
        }
    }

    if (l1) tail->link = l1;
    if (l2) tail->link = l2;

    return merged;
}

void print_list(Slist* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}

int main() {
    int n, data;

    printf("Enter number of elements in List 1: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insert_at_end_list1(data);
    }

    printf("Enter number of elements in List 2: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insert_at_end_list2(data);
    }

    Slist* merged = merge_lists(head1, head2);
    printf("Merged list: ");
    print_list(merged);

    // Free memory
    Slist *temp;
    while (merged) {
        temp = merged;
        merged = merged->link;
        free(temp);
    }

    return 0;
}