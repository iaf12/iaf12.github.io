#include<stdio.h>
#define MAX_SIZE 20

void delete_at_index(int a[], int size, int index);

int main()
{
    int a[MAX_SIZE] = {11,22,33,44,55,66,77}, size = 7;
    int index=4, i;

    printf("Initial array :-\n");
    for(i=0 ; i<size ; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nAfter deleting at index.:-\n");
    delete_at_index( a, size, index);

    return 0;
}

void delete_at_index(int a[], int size, int index)
{
    int i;
    for(i=index ; i<size ; i++)
    {
        a[i] = a[i+1];
    }
    size--;

    for(i=0 ; i<size ; i++)
    {
        printf("%d\t",a[i]);
    }
}

