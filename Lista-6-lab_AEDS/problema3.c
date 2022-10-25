#include <stdio.h>

int main(){

    int fatorial, resposta = 1;

    printf("Digite o numero inteiro positivo que voce quer fatorar:\n");
    scanf("%d", &fatorial);
    
    while (fatorial > 0) {
        for ( ; fatorial >= 1; --fatorial){
        resposta = resposta * fatorial;
        }

    printf("O fatorial eh: %d", resposta);
    } 

    return 0;
}