#include<stdio.h>
int main()
{
    int a,b,NUMBER;
    float c,SALARY;

    scanf("%d %d",&a,&b);
    scanf("%f",&c);

    SALARY = b * c;

    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;
}
