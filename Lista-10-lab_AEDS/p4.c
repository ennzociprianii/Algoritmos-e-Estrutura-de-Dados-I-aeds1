#include<stdio.h>


int mdc(int a, int b)
{
    if(b==0){
        return a;
    }
    
    return mdc(b,a%b);
}

void main(){
    int x,y;

    printf("Digite dois numeros para calcular o MDC: ");
    scanf("%d %d",&x,&y);
    printf("%d",mdc(x,y));
}