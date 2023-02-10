#include<stdio.h>
int main()
{
   float a,b,c,d,average;
    scanf("%f%f%f%f",&a,&b,&c,&d);

    average=(a+b+c+d)/4; //add total number and divide by number of digit

    printf("%.2f\n",average);

    return 0;
}
