#include<stdio.h>

struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node node;
void print(node *temp);

int main()
{
    node a, b, c, d;
    node *head = NULL;

    head = &a;


    a.value = 1;
    a.next = &b;
    print(&a);

    b.value = 2;
    b.next = &c;
    print(&b);

    c.value = 3;
    c.next = &d;
    print(&c);

    d.value = 4;
    d.next = NULL;
    print(&d);


    return 0;
}

void print(node *temp)
{
    printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
}
