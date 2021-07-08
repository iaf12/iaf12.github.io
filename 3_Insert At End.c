#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;

struct Node
{
    int data;
    node *next;
};

void print(node *temp);
node * InsertionAtEnd(node *temp, int data);

int main()
{
    node *head = NULL;
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->data = 10;
    a->next = NULL;
    head = a;

    b->data = 20;
    b->next = NULL;
    a->next = b;

    c->data = 30;
    c->next = NULL;
    b->next = c;

    d->data = 40;
    d->next = NULL;
    c->next = d;

    printf("\nInitial List : ");
    print(head);

    printf("\nAfter operation the List : ");
    head = InsertionAtEnd(head, 69);
    print(head);

    return 0;
}

void print(node *temp)
{
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

node * InsertionAtEnd(node *temp, int data)
{
    node *ptr = (node *) malloc(sizeof(node));
    node *p = temp;

    while(p->next != NULL){
        p = p->next;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return temp;
}

