#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;

struct Node
{
    int data;
    node *next;
};

void print(node *temp);
node * InsertionAtFirst(node *temp, int data);

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

    print(head);

    head = InsertionAtFirst(head, 5);
    print(head);

    return 0;
}

void print(node *temp)
{
    printf("\nInitial List : ");
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

node * InsertionAtFirst(node *temp, int data)
{
    node *ptr = (node *) malloc(sizeof(node));
    ptr->next = temp;
    ptr->data = data;

    return ptr;
}
