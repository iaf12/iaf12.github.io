
#include<stdio.h>

struct pass
{
    int n1, n2;
};

typedef struct pass point;
void print(point a);

int main()
{
    point p = {2,4};
    print(p);

    return 0;
}

void print(point a)
{
    printf("%d %d\n", a.n1, a.n2);
}
