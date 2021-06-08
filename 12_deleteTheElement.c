#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8}, size=8, max_size=10;
    int i, element;

    printf("\nUnchanged array :\n");
    for(i=0 ; i<size ; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element which u wanna delete :");
    scanf("%d",&element);


    printf("\nAfter deleting the element : \n");
    delete_at_element(arr, size, element);

    return 0;
}

void delete_at_element(int a[], int size, int value)
{
    int i, index;
    for(i=0 ; i<size ; i++){
        if(a[i] == value){
            index = i;
        }
    }

    //deleting element...
    for(i=index ; i<size ; i++){
        a[i] = a[i+1];
    }
    size--;

    // printing the array after deleting the element.
    for(i=0 ; i<size ; i++){
        printf("%d\t", a[i]);
    }
}

