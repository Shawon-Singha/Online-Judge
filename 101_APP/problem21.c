#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if((a>b) && (a>c))
    {
        printf("a is max.\n");
    }
    else if((b>a) && (b>c))
    {
        printf("b is max.\n");
    }
    else
    {
        printf("c is max.");
    }
    return 0;

}

