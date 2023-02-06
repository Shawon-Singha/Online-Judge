#include<stdio.h>
int main()
{
    int a,b,c,d;
    float k,l,total;
    scanf("%d %d %f",&a,&b,&k);
    scanf("%d %d %f",&c,&d,&l);

    total = (b * k) + (d * l);

    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;


}
