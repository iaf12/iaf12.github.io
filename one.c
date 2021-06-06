#include<stdio.h>

struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node node;

int main()
{
    node a, b, c, d;
    node *head = NULL;

    head = &a;

    a.value = 1;
    a.next = &b;
    printf("%p \t %p \t %p\n", &a, a.value, a.next);

    b.value = 2;
    b.next = &c;
    printf("%p \t %p \t %p\n", &b, b.value, b.next);

    c.value = 3;
    c.next = &d;
    printf("%p \t %p \t %p\n", &c, c.value, c.next);

    d.value = 4;
    d.next = NULL;
    printf("%p \t %p \t %p\n", &d, d.value, d.next);


    return 0;
}
