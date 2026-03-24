/*5. Dynamic Memory with Structures
Goal
Understand how to allocate and free memory dynamically for structures, including use cases like linked lists and memory pools in
embedded systems.
Activity
Use malloc() to allocate a structure dynamically and assign values to members.
Build a simple singly linked list using structure and pointers.
Implement a queue using structure-based nodes.
Write a memory pool manager that uses an array of structures and a free list.
Tip: Always check malloc() return and release memory using free() after usage.*/
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    char name[20];
};

struct node
{
    int data;
    struct node *next;
};

#define POOL_SIZE 5

struct pool_node
{
    int data;
    struct pool_node *next;
};

struct pool_node pool[POOL_SIZE];
struct pool_node *free_list = NULL;

void init_pool()
{
    for(int i=0;i<POOL_SIZE-1;i++)
        pool[i].next = &pool[i+1];

    pool[POOL_SIZE-1].next = NULL;
    free_list = &pool[0];
}

struct pool_node* pool_alloc()
{
    if(free_list==NULL)
        return NULL;

    struct pool_node *temp = free_list;
    free_list = free_list->next;
    return temp;
}

void pool_free(struct pool_node *p)
{
    p->next = free_list;
    free_list = p;
}

int main()
{
    struct student *s;

    s = (struct student*)malloc(sizeof(struct student));

    if(s==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }

    s->id = 1;
    printf("enter name: ");
    scanf("%s",s->name);

    printf("id=%d name=%s\n",s->id,s->name);

    free(s);


    struct node *head=NULL,*temp,*newnode;

    for(int i=1;i<=3;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        if(newnode==NULL)
        {
            printf("memory error\n");
            return 0;
        }

        newnode->data = i*10;
        newnode->next = NULL;

        if(head==NULL)
            head = newnode;
        else
            temp->next = newnode;

        temp = newnode;
    }

    temp = head;
    printf("linked list: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");


    struct node *front=NULL,*rear=NULL;

    for(int i=1;i<=3;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = i;
        newnode->next = NULL;

        if(front==NULL)
        {
            front=rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
    }

    printf("queue: ");
    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");


    init_pool();

    struct pool_node *p1,*p2;

    p1 = pool_alloc();
    p2 = pool_alloc();

    if(p1) p1->data = 100;
    if(p2) p2->data = 200;

    printf("pool values: %d %d\n",p1->data,p2->data);

    pool_free(p1);
    pool_free(p2);

    return 0;
}