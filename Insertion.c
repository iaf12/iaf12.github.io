#include<stdio.h>

void insertion_sort(int arr[], int size)
{
    int j, key;
    for(int k=1 ; k<size ; k++)
    {
        key = arr[k];
        j = k-1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
void display(int arr[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[] = {9, 3, 5, 1, 3, 7, 10, -9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);
    display(arr, size);

    return 1;
}
