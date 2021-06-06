#include<stdio.h>

typedef struct Node node;
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

    head = j;

    j->n = 10;
    j->point = k;
    show(j);

    k->n = 20;
    k->point = l;
    show(k);

    l->n = 30;
    l->point = m;
    show(l);

    m->n = 40;
    m->point = NULL;
    show(m);

    return 0;
}
void show(node *temp)
{
    printf("%p \t %d \t %p\n", temp, temp->n, temp->point);
}
