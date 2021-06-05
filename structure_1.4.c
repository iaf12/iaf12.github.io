// structure with pointer....

typedef struct Point point;

struct Point
{
    int x;
    int y;
};


#include<stdio.h>
int main()
{
    point p;
    point *a;
    a = &p;

    p.x = 3;
    p.y = 4;

    printf("%d\n", &p);
    printf("%d\n\n", &a);

    printf("%p \t %p\n", &p.x, &p.y);
    printf("%p \t %p\n", &a->x, &a->y);

    printf("%d\n", a->x);
    printf("%d\n", a->y);

    return 0;
}



