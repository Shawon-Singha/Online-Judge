#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d %d",&a,&b);

    c = (b * a) / 12.00;
    printf("%.3f\n",c);
    return 0;
}
