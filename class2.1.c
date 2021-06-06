#include<stdio.h>

int main()
{
    int a;
    float b;

    printf("Hello, World\n");

    printf("Enter two number (int, float) respectively :");
    scanf("%d %f", &a, &b);
    printf("a = %d\nb=%.2f\n", a, b);

    //print a different mediums.
    printf("%d\n",a);
    printf("%o\n",a);
    printf("%X\n",a);

    float j, k;
    printf("Enter ur last two semesters CGPA :");
    scanf("%f %f", &j, &k);
    printf("First CGPA : %.2f\nSecond CGPA: %.2f\n", j, k);

    //time
   /* int h,m,s;
    printf("current time :-\n");
    scanf("%d %d %d", &h, &m, &s);
    printf("%d.%d.%d", h, m, s);
    */

    return 0;
}
