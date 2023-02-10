#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&f);

    e = (b + c + d + a) / 4;
    printf("Media: %.1f\n",e);

    if(5.0 <= e <= 6.9)
    {
        printf("Aluno em exame.\n");
    }

    printf("Nota do exame: %.1f\n",f);

    g = (e + f) / 2;

    if(g>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(f>=7)
        {
            printf("Aluno aprovado.\n");
        }

    else
    {
        printf("Aluno aprovado.\n");
    }

    printf("Media final: %.1f\n",g);


    return 0;
}

