#include<stdio.h>
#define MAX_SIZE 20

void insert_at_begining(int v[], int size, int key);

int main()
{
    int a[MAX_SIZE] = {10, 20, 30, 40, 50, 60}, size=6;
    insert_at_begining(a, size, 5);

    return 0;
}

void insert_at_begining(int v[], int size, int key)
{
    int i, temp;
    for(i=size ; i>=0 ; i--)
    {
        v[i+1] = v[i]   ;
    }
    v[0] = key;
    size++;

    for(i=0 ; i<size ; i++)
    {
        printf("%d\t", v[i]);
    }
}

