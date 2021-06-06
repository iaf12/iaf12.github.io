#include<stdio.h>
int main()
{
    int x=6,y=9,*p,*q,sum;

    p = &x;
    q = &y;

    sum = *p + *q;
    int sub = *q-*p;
    int mul = *p * *q;
    double div = *q / *q;

    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%.2lf\n",div);

    return 0;
}
