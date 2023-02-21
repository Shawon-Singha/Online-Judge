#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
    {
        printf("VOWEL\n");
    }
    else
    {
        printf("CONSONENT.");
    }
    return 0;
}
