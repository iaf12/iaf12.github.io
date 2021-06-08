// find maximum & minimum value through array...
#include<stdio.h>

void calculation(int a[], int size)
{
    int max = a[0];
    int min = a[0];

    for(int i=0; i<size; i++)
    {
        if(a[i] == a[max]){
            max = i;
        }
        if(a[i] < min){
            min = i;
        }
    }

    printf("Maximum = %d\n",a[max]);
    printf("Minimum = %d\n",a[min]);

}

int main()
{
    int a[100] = {9,2,3,4,5,30,7,8,-3,10};
    int i, size=10;
    // int max=0, min=0;
    /*
        for(i=0 ; i<size ; i++)
        {
            if(a[i] < a[min])
            min = i;

            if(a[i] > a[max])
                max = i;
        }
    printf("minimum value : %d\n",a[min]);
    printf("maximum value : %d\n",a[max]);
    */
    calculation( a, size);

    return 0;
}
