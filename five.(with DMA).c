#include<stdio.h>

typedef struct Node node;

struct Node
{
    int n;
    node * point;
};

int main()
{
    node *j, *k, *l, *m;
    node *head;

    j = (node *)malloc(sizeof(node));
    k = (node *)malloc(sizeof(node));
    l = (node *)malloc(sizeof(node));
    m = (node *)malloc(sizeof(node));

    head = &j;

    j->n = 10;
    j->point = &k;
    printf("%u \t %d \t %u\n", j, j->n, j->point);

    k->n = 20;
    k->point = &l;
    printf("%u \t %d \t %u\n", k, k->n, k->point);

    l->n = 30;
    l->point = &m;
    printf("%u \t %d \t %u\n", l, l->n, l->point);

    m->n = 40;
    m->point = NULL;
    printf("%u \t %d \t %u\n", m, m->n, m->point);

    return 0;
}

//1. 2. 3. 4.
