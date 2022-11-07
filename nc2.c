#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, X, Y, i, t, aux, soma=0;
    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &X);
        scanf("%d", &Y);

        if(Y>X){
            aux=Y;
            Y=X;
            X=aux;
        }

        if(X%2 !=0 || Y%2 != 0){
            for(t=X; t<Y; t++) {
                soma = soma + t;
            } printf("%d\n", soma);
        }

        if(X == Y) printf("%d\n", soma);
        if(X == Y+1) printf("%d\n", soma);
        if(X%2 != 0 && Y%2 != 0){
            if(X == Y+2) 
            printf("%d\n", soma);
        }
    }
    return 0;
}