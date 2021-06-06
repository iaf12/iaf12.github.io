#include<stdio.h>

typedef struct Node node;

struct Node
{
    int n1;
    node *add;
};

void reverse_list(node *temp);

int main()
{
    node a, b, c, d;
    node *start = NULL;

    start = &a;

    a.n1 = 10;
    a.add = &b;

    b.n1 = 20;
    b.add = &c;

    c.n1 = 30;
    c.add = &d;

    d.n1 = 40;
    d.add = NULL;

    reverse_list(start);

    return 0;
}

void reverse_list(node *temp)
{
    if(temp == NULL)
    {
        return ;
    }
  reverse_list(temp->add);
  printf("%d\n",temp->n1);

}
