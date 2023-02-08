#include<stdio.h>
int main()
{
    int a, b;
    float snack;
    scanf("%d%d",&a,&b);

    float ar[5] = {4.00,4.50,5.00,2.00,1.50};

    snack = ar[a-1] * b;
    printf("Total: R$ %.2f\n",snack);

    return 0;
}
