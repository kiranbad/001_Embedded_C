/*12. Pointer and Recursion
Goal: Use pointers within recursive functions to manipulate data structures or strings.
Activity:
1. Write a recursive function to reverse a string using pointers.
2. Implement a recursive traversal of a linked list using pointers.
3. Use recursion to perform operations such as summing elements of an array via pointer traversal*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}Slist;
void string_reverse(char *start,char *end )
{
    if(start>=end)
    {
        return;
    }
    char temp=*start;
    *start=*end;
    *end=temp;
    string_reverse(start+1,end-1);
}

void print_list(Slist *temp)
{
    if(temp == NULL)
        return;

    printf("%d -> ", temp->data);
    print_list(temp->link);
}
int main()
{
    char str[]="Embedded";
    string_reverse(str,str+strlen(str)-1);
    printf("%s\n",str);

    Slist *head = NULL;

    Slist *n1 = malloc(sizeof(Slist));
    Slist *n2 = malloc(sizeof(Slist));
    Slist *n3 = malloc(sizeof(Slist));

    n1->data = 10; n1->link = n2;
    n2->data = 20; n2->link = n3;
    n3->data = 30; n3->link = NULL;

    head = n1;

    print_list(head);
    printf("NULL\n");

}