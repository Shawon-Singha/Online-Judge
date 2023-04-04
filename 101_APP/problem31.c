#include<stdio.h>
int main()
{
    int a,b,c;

    for(a = 1; a<=4; a++)
    {
        for(b = 1; b<= (2 * a - 1); b++)
        {
            printf("*");

        }
        for(c = 1;c<=3; c++)
        {
            printf(" ");

        }
        printf("\n");
    }

    return 0;
}
