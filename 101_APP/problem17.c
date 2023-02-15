#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);

    if(marks>=80)
    {
        printf("A+\n");
    }
    else if(70<=marks<=79)
    {
        printf("A\n");
    }
    else if(60<=marks<=69)
    {
        printf("A-\n");
    }
    else if(50<=marks<=59)
    {
        printf("B\n");
    }
    else if(40<=marks<=49)
    {
        printf("C\n");
    }
    else if(33<=marks<=39)
    {
        printf("D\n");
    }
    else
    {
        printf("F");
    }
    return 0;
}
