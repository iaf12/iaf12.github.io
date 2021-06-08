#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8}, size=8, max_size=10;
    int i, element;

    printf("\nUnchanged array :\n");
    for(i=0 ; i<size ; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element which will indicate the previous element to delete :");

    scanf("%d",&element);

    printf("\nAfter deleting : \n");
    delete_before_element(arr, size, element);

    return 0;
}

void delete_before_element(int a[], int size, int value)
{
    int i, index;
    for(i=0 ; i<size ; i++)
    {
        if(a[i] == value)
        {
            index = i;
        }
    }

    //deleting previous element...
    for(i=index ; i<size ; i++)
    {
        a[i-1] = a[i];
    }
    size--;

    // printing the array after deleting the previous element of the element which u defined.
    for(i=0 ; i<size ; i++)
    {
        printf("%d\t", a[i]);
    }
}
