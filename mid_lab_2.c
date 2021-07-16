#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node
{
    int data;
    node *next;
};

node * createList(node *temp);
void display(node *temp);
void size(node *temp);
void empty(node *temp);
node * push(node *temp, int data, int index);
node * pop(node* head, int index);

int main()
{
    node *head = NULL;
    empty(head);
    head = createList(head);

    display(head);
    head = push(head, 15, 2);
    display(head);
    size(head);

    pop(head, 1);
    display(head);
    empty(head);

    return 0;
}
node * createList(node *temp)
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->data = 10;
    a->next = NULL;
    temp = a;

    b->data = 20;
    b->next = NULL;
    a->next = b;

    c->data = 30;
    c->next = NULL;
    b->next = c;

    d->data = 40;
    d->next = NULL;
    c->next = d;

    return temp;
}

void display(node *temp)
{
    printf("\nInitial List : ");
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void size(node *temp)
{
    int count = 0;
    while( temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("size = %d\n", count);
}

void empty(node *temp)
{
    if(temp == NULL)
    {
        printf("Linked list is empty.\n");
        return ;
    }
    printf("Linked list is not empty.\n");
}

node * push(node *temp, int data, int index)
{
    node *ptr = (node *) malloc(sizeof(node));
    node  *p = temp;

    int i = 0;
    while(i != index-1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return temp;
}



// 10  20  15  30  40
//   20  15  30  40
//      15   30   40

node * pop(node* head, int index)
{
    node *p = head;
    node *q = head->next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}
