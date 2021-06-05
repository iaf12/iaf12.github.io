#include<stdio.h>
struct Point
{
    int x, y;
};
typedef struct Point point;

void print(point *a);
int main()
{
    point p = {4,1};
    print(&p);
    printf("Address of p \t\t\t\t: %u\n", &p);  //address of p variable
    printf("Address of x & y (main function)        : %u %u\n", &p.x, &p.y);

    return 0;
}
void print(point *a)
{
    printf("address which is pointed by pointer a  : %u\n", a);  // address of p variable which is pointed by a pointer
    printf("address of pointer a \t\t\t: %u\n", &a);  // address of pointer a
    printf("variable of x & y \t\t\t: %d %d\n", a->x, a->y);
    printf("address of x & y \t\t\t: %u %u\n", &a->x, &a->y);
}
