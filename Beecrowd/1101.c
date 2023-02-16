#include <stdio.h>

int main(){
    
    int n,x,y,temp,soma;
    while(1){
 
                scanf("%d%d",&x,&y);
                if(x <= 0) break;
                if(y <= 0) break;
                
                if(x > y){
                     temp = x;
                     x = y;
                     y = temp;
                }
                soma = 0;
                for(int i = x; i <= y; i++){
                       printf("%d ",i);
                       soma += i;
                }
                printf("Sum=%d\n",soma);

    }
    return 0;
}