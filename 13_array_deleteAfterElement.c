#include<stdio.h>
void delete_after_element(int c[], int size, int value);

int main()
{
    int a[200] = {10, 20,30, 40, 50, 60, 70, 80}, size=8, i, element=40;

    for(i=0 ; i<size ; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");

   delete_after_element(a, size, element);



    return 0;
}
void delete_after_element(int c[], int size, int value)
{
    int i, index;
    for(i=-0 ; i<size ; i++){
        if(c[i] == value){
            index = i;
        }
    }

     for(i=index ; i<size ; i++){
        c[i+1]= c[i+2];
     }
     size--;

      for(i=0 ; i<size ; i++){
        printf("%d\t", c[i]);
     }
}
