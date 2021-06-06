#include<stdio.h>

int sum(int *p, int *q)
{
    int add ;
    add = *p+*q;
    return add;
}

void max_min(int x[], int size, int *max, int *min)
{
    int i;
    max = &x[0];
    min = &x[0];

    for(i=0 ; i<size ; i++)
    {
        if(*max<x[i])
        {
            *max = x[i];
        }
    }
    printf("%d\n", *max);

    for(i=0 ; i<size ; i++)
    {
        if(*min>x[i])
        {
            *min = x[i];
        }
    }
    printf("%d\n", *min);
}

int main()
{
    int a[10]= {1,2,3,4,5,6},max_size=10, size=6;

    int n1 = 5;
    int n2 = 6;

    int max, min;

    int add = sum(&n1, &n2);
    printf("%d\n",add);

    max_min(a,size,&max,&min);

    return 0;
}
