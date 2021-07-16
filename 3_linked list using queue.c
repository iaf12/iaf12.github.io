#include<stdio.h>
#include<stdlib.h>

typedef struct Node queue;

struct Node
{
    int data;
    queue * next;
};

queue * createList(queue * temp);
void display(queue * temp);
queue * push_back(queue *  temp, int data);
queue * pop_front(queue *  temp);
int back(queue * temp);
int size(queue * temp);
int is_empty(queue * temp);

int main()
{
    queue *head = NULL;

    head = createList(head);
    display(head);

    push_back(head, 69);
    display(head);

    head = pop_front(head);
    display(head);

    printf("\nLast element : %d\n", back(head));
    printf("size = %d\n", size(head));

    if(is_empty(head) == 1)
    {
        printf("\nList is not empty.\n");
    }
    else
    {
        printf("List is empty.\n");
    }


    return 0;
}

queue * createList(queue * temp)
{
    queue *j, *k, *l, *m;

    j = (queue *)malloc(sizeof(queue));
    k = (queue *)malloc(sizeof(queue));
    l = (queue *)malloc(sizeof(queue));
    m = (queue *)malloc(sizeof(queue));


    j->data= 10;
    j->next = NULL;
    temp = j;

    k->data = 20;
    k->next = NULL;
    j->next = k;


    l->data = 30;
    l->next = NULL;
    k->next = l;

    m->data = 40;
    m->next = NULL;
    l->next = m;

    return temp;
}

int is_empty(queue * temp)
{
    if(temp == NULL)
    {
        return -1;
    }
    return 1;
}

int size(queue * temp)
{
    int count=0;

    if(temp == NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

queue * push_back(queue *  temp, int data)
{
    queue * ptr = (queue*) malloc(sizeof(queue));

    ptr->data = data;
    queue* p = temp;

    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return temp;
}

queue * pop_front(queue *  temp)
{
    queue *p = temp;
    temp = temp->next;

    free(p);

    return temp;
}

int back(queue * temp)
{
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}

void display(queue * temp)
{
    if(temp == NULL)
    {
        printf("List is NULL.\n");
        return ;
    }

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}
