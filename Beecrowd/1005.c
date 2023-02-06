#include<stdio.h>
int main()
{
    float a,b,average;
    scanf("%f %f",&a,&b);

    a = a * 3.5;
    b = b * 7.5;
    average = (a + b) / 11;

    printf("MEDIA = %.5f\n",average);

    return 0;
}
