#include<stdio.h>
int main()
{
    int i,n;
    int b[7];
    int a[7] ={100,50,20,10,5,2,1};

    scanf("%d",&n);
    printf("%d\n",n);

    for(i=0;i<7;i++)
    {
        b[i] = n / a[i];
        n = n % a[i];
    }

    for(i=0;i<7;i++)
    {
        printf("%d nota(s) de R$ %d,00\n",b[i],a[i]);
    }

    return 0;
}
