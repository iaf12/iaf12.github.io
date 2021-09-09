#include<stdio.h>



int smallest(int arr[], int size, int i)
{
    int j, small, pos;
    small = arr[i];
    pos = i;
    printf("\n");
    for(j=i+1 ; j<size ; j++)
    {
        if(arr[j]<small)
        {
            small = arr[j];
            pos = j;
            printf("1..  %d .. %d\n", j, arr[j]);
        }
        printf("2..  %d .. %d\n", j, arr[j]);
    }
    return pos;
}

int main()
{
    int arr[] = {2, 6, 10, 2, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i,j, temp, pos;
    for(i=0 ; i<size ; i++)
    {
        pos=(smallest(arr, size, i));
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }

    for(i=0 ; i<size ; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
