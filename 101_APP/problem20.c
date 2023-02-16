#include<stdio.h>
int main()
{
    int number ;
    scanf("%d",&number);

    if((number%3==0) && (number%5==0)) //&& means both condition must be true
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
