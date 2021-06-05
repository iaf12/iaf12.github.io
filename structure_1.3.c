
#include<stdio.h>
struct Point
{
    int x;
    int y;
    int m;
    int o;
};

typedef struct Point declare;

int main()
{
    //declare p = {1,5};
    declare p = {.x = 1, .y = 5};

    // user input
    printf("Enter two number: ");
    scanf("%d %d", &p.m, &p.o);

    printf("x = %d \ny = %d\n", p.x, p.y);
    printf("m = %d \no = %d\n", p.m, p.o);

    return 0;
}
