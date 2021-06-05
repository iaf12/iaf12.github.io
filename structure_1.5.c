/// Assign variable through using pointer.

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
    // p.x = 4;
    //p.y = 5;
    a->x = 1;
    a->y = 2;
    printf("%d %d\n", p.x, p.y);
    printf("%d %d\n", a->x, a->y);

    return 0;
}
