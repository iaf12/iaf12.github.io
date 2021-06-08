#include<stdio.h>
#define MAX_SIZE 20

void insert_after_index(int c[], int s, int index, int v);

int main()
{
    int a[MAX_SIZE] = {10,20,30,40,50,60}, size=6, value=69;
    int i, index=3;

    printf("Initial array :-\n");
    for(i=0 ; i<size ; i++){
        printf("%d\t",a[i]);
    }

    printf("\nInsert after index :- \n");
    insert_after_index( a, size,index, value);

    return 0;
}

void insert_after_index(int c[], int s, int index, int v)
{
    int i;
    for(i=s ; i>=index+1 ; i--){
        c[i+1] = c[i];
    }
    c[index+1] = v;
    s++;

    for(i=0 ; i<s ; i++)
    {
        printf("%d\t",c[i]);
    }

}
