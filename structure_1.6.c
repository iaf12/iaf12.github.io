#include<stdio.h>
struct Point
{
    int x;
    int y;
};

typedef struct Point point;

int main()
{

    point p;
    point *a;
    a = &p;

    printf("Enter two value of x & y: ");
    scanf("%d %d", &a->x, &a->y);

    printf("%d %d\n", p.x, p.y);
    printf("%d %d\n", a->x, a->y);

    return 0;
}
