#include<stdio.h>
int main()
{
    int a,sum = 0;

    for(a = 101; a>=1; a = a - 2)
    {
        sum = sum + a;
    }
    printf("%d\n",sum);

    return 0;
}
