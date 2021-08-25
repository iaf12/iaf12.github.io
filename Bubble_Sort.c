#include<stdio.h>

void Bubble(int arr[], int size)
{
    int j, top;
    for(int step = 1; step<size ; step++)
    {
        for(int i=0 ;  i<size ; i++)
        {
            j = i+1;

            if(arr[i] > arr[j])
            {
                top = arr[i];
                arr[i] = arr[j];
                arr[j] = top;
            }
        }
    }
}

void display(int arr[], int size)
{
    for(int i=0 ; i<size ; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 6, 9, 1, 2, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
    Bubble(arr, size);
    display(arr, size);

    return 0;
}
