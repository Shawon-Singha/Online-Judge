#include<stdio.h>
int main()
{
    double a,b,c,x,R1,R2;
    scanf("%lf %lf %lf",&a,&b,&c);

    x = (b * b) - (4 * a *c);
    R1 = (- b + sqrt(x)) / (2 * a);
    R2 = (- b - sqrt(x)) / (2 * a);

    if((a == 0) || x < 0)
    {
        printf("Impossivel calcular");
    }

    else
    {
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    return 0;
}
