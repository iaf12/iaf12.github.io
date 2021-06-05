#include<stdio.h>
struct Point
{
    int x;
    int y;
};

typedef struct Point declare;

int main()
{
    declare p;

    p.x = 5;
    p.y = 6;

    printf("%d \n%d", p.x, p.y);

    return 0;
}

