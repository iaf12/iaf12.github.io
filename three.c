#include<stdio.h>
struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node node;
void display(node *temp);

int main()
{
    node j, k, l, m, n;
    node *head = NULL;

    display(head);

    head = &j;

    j.value = 1;
    j.next = &k;

    k.value = 2;
    k.next = &l;

    l.value = 3;
    l.next = &m;

    m.value = 4;
    m.next = &n;

    n.value = 5;
    n.next = NULL;

    display(head);

    return 0;
}

void display(node *temp)
{
    if(temp == NULL){
        printf("List is empty.\n");
        return 1;
    }
    while(temp!=NULL)
    {
        printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
}
