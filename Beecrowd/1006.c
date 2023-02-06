#include<stdio.h>
int main()
{
    double a,b,c,average;
    scanf("%lf %lf %lf",&a,&b,&c);

    a = a * 2;
    b = b * 3;
    c = c * 5;
    average = (a + b + c) / 10;

    printf("MEDIA = %.1lf\n",average);

    return 0;
}

