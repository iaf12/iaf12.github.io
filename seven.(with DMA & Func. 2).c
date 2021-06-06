#include<stdio.h>

typedef struct Node node;
void reverse(node *temp);
void show(node *temp);

struct Node
{
    int n;
    node * point;
};

int main()
{
    node *j, *k, *l, *m;
    node *head = NULL;

    j = (node *)malloc(sizeof(node));
    k = (node *)malloc(sizeof(node));
    l = (node *)malloc(sizeof(node));
    m = (node *)malloc(sizeof(node));

    show(head); // it will print empty, since it does not get the address of head/ starting point

    head = j;

    j->n = 10;
    j->point = k;


    k->n = 20;
    k->point = l;


    l->n = 30;
    l->point = m;


    m->n = 40;
    m->point = NULL;

    show(head);
    reverse(head);

    return 0;
}

void show(node *temp)
{
    if(temp == NULL){
        printf("List is empty.\n");
        //return ;
    }
    while(temp!=NULL)
    {
        printf("%p \t %d \t %p\n", temp, temp->n, temp->point);
        temp = temp->point;
    }
}
void reverse(node *temp)
{
    if(temp == NULL)
    {
        return ;
    }
    reverse(temp->point);
    printf("%d\t",temp->n);
}

