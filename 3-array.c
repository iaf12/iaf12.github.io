#include<stdio.h>
#define MAX_SIZE 20

void insert_afer_index(int v[], int size, int index, int key);
void insert_before_index(int v[], int size, int index, int key);

int main()
{
    int a[MAX_SIZE] = {10, 20, 30, 40, 50, 60}, size=6, index=3, key=99;

    printf("Initial array       : ");
    for(int i=0 ; i<size ; i++)
    {
        printf(" %d\t", a[i]);
    }

    printf("\ninsert after index : ");
    insert_after_index(a, size, index, key);

    printf("\ninsert before index : ");
    insert_before_index(a, size, index, key);

    return 0;
}

void insert_after_index(int v[], int size, int index, int key)
{
    //  10 20 30 40 50 60
    //  10 20 30 99 40 50 60

    int i;
    for (i = size; i >=index+1 ; i--)
    {
        v[i+1] = v[i];
    }
    v[index+1] = key;
    size++;


    for(i=0 ; i<size ; i++)
    {
        printf(" %d\t",v[i]);
    }
}
void insert_before_index(int v[], int size, int index, int key)
{
    // 10 20 30 40 50 60
    // 10 20 99 30 40 50 60
    int i;
    for(i=size ; i>=index-1 ; i--){
        v[i+1] = v[i];
    }
    v[index-1] = key;
    size++;

    for(i=0 ; i<size ; i++)
    {
        printf("%d\t", v[i]);
    }

}

