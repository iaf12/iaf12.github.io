
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high)
{

    int pivot = array[high];

    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;

            swap(&array[i], &array[j]);
        }
        printf("loop. ");
        printArray(array, 7);
    }


    swap(&array[i + 1], &array[high]);
    printf("After Loop. ");
    printArray(array, 7);

    printf("\t return : %d\n\n", i+1);

    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        printf("0. ");
        printArray(array, 7);

        int pi = partition(array, low, high);
        printf("1. ");
        printArray(array, 7);

        quickSort(array, low, pi - 1);
        printf("2. ");
        printArray(array, 7);

        quickSort(array, pi + 1, high);
        printf("3. ");
        printArray(array, 7);
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {8, 7, 2, 1, 0, 9, 6};

    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted Array\n");
    printArray(data, n);

    quickSort(data, 0, n - 1);

    printf("Sorted array in ascending order: \n");
    printArray(data, n);
}
