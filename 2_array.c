#include<stdio.h>
#define MAX_SIZE 20

void insert_at_index(int v[], int size,int index, int key);
void insert_before_index(int v[], int size, int index, int key);

int main()
{
    int a[MAX_SIZE] = {10, 20, 30, 40, 50, 60}, size=6, index, key;

    printf("Initial array      : ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("Insert at index (input index & element) :\n");
    scanf("%d %d", &index, &key);

    //1.
    printf("insert at index     : ");
    insert_at_index(a, size, index, key);
    printf("\n");

    return 0;
}

void insert_at_index(int v[], int size, int index, int key)
{
    int i;
    for(i=size ; i>=index ; i--)
    {
        v[i+1] = v[i];
    }
    v[index] = key;
    size++;

    for(i=0 ; i<size ; i++)
    {
        printf("%d\t",v[i]);
    }
}


