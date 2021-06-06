#include<stdio.h>
#define MAX_SIZE 10

void search_element(int b[], int size, int key);

int main()
{
    int a[MAX_SIZE]= {10,20,30,40,50,60}, size=6;
    search_element(a, size, 50);


    return 0;
}

void search_element(int b[], int size, int key)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(b[i]==key)
            b[i]  =b[i+1];
    }

    for(i=0; i<size-1; i++)
    {
        printf("%d ",b[i]);
    }

}

