#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);

    if(number%2==0)  //%calculate remainder.
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
