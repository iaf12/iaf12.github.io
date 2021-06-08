
/// Insert an element before the  element.

#include<stdio.h>
#define MAX_SIZE 20

void insert_before_element(int c[], int s, int v, int v2);

int main()
{
    int a[MAX_SIZE] = {10,20,30,40,50,60}, size=6, value=40, value_2= 69;
    int i;

    printf("Initial array :-\n");
    for(i=0 ; i<size ; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nInsert before element :- \n");
    insert_before_element( a, size, value, value_2);

    return 0;
}

void insert_before_element(int c[], int s, int v, int v2)
{
    int i, index;

    for(i=0 ; i<s ; i++)
    {
        if(c[i]==v)
            index=i;
    }
    printf("%d\n",index);


    for(i=s ; i>=index ; i--)
    {
        c[i+1] = c[i];
    }
    c[index] = v2;
    s++;

    for(i=0 ; i<s ; i++)
    {
        printf("%d\t",c[i]);
    }

}

