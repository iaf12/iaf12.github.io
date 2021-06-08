
/*  specially to upload to Github*/

#include<stdio.h>
#define MAX_SIZE 20
void output(int v[], int size, int *max, int *min);
int main()
{
    int arr[MAX_SIZE] = {80, 20, 30, 40, 50,60}, size=6;
    int max, min;

    output(arr, size, &max, &min);
    /* without passing the address of max & min you'll not get the correct answer in the term of pointer..
      check output function (*max & *min) */


    return 0;
}

void output(int v[], int size, int *max, int *min)
{
    *max = v[0];
    *min = v[0];
    int i;
    for( i; i<size ; i++)
    {
        if(*max < v[i])
            *max = v[i];

        if(*min > v[i])
            *min = v[i];
    }
    printf("maximum number =  %d\n", *max);
    printf("minimum number =  %d\n", *min);
}

void calculation(int arr[], int size, int *sum, int *mul, int mean)
{

}


