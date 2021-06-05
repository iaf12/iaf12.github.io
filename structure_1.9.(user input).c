
#include<stdio.h>

struct Var
{
    int m, n;
};

typedef struct Var var;
void print(var b);
void Scan(var *a);

int main()
{
    var v;
    Scan(&v);
    print(v);

    return 0;
}

void Scan(var *a)
{
    printf("Enter two integer : ");
    scanf("%d %d", &a->m, &a->n);
}

void print(var b)
{
    printf("%d %d\n", b.m, b.n);
}

