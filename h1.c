#include<stdio.h>

int main()
{
    int n, key=0, max=0, min=0;
    int arr[] = {7, 6, 2, 5, 9, 3, 8, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("which element you wanna search : ");
    scanf("%d", &n);

    int i = 0;

    while(i<=size)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }

        if(n == arr[i])
        {
            printf("%d is at %d index. and next greater element is %d\n", n, i, max);
        }

        if(min > arr[i])
        {
            min = arr[i];
        }

        i++;
    }
    if(n != arr[i])
    {
        printf("%d is not exist in the list, and the smallest element of the list is %d\n", n, min);
    }


    return 0;
}

