#include <stdio.h>

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

int binarySearch(int array[], int x, int low, int high)
{
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}


int main(void)
{
    int array[] = {7, 6, 4, 2, 5, 9, 3, 8, 2};
    int n = sizeof(array) / sizeof(array[0]);

    insertion_sort(array, n);

    ///Display...
    int top;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d  ", array[i]);
        top = i;

    }
    printf("\n");

    int x;
    printf("Which element you wanna search : ");
    scanf("%d", &x);

    int result = binarySearch(array, x, 0, n - 1);

    if (result == -1)
        printf("Element %d is not found. the lowest element of the list is %d.\n", x, array[0]);
    else
        printf("Element %d is found at index %d\n", x, result);

    return 0;
}
