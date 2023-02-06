#include<stdio.h>
int main()
{
    float a;
    double b,TOTAL;
    char name[30];

    gets (name);
    scanf("%f %lf",&a,&b);


    TOTAL = a + ( b * 15) / 100;

    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
