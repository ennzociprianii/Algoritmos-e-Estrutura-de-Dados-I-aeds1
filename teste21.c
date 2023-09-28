#include <stdio.h> 
#include "funcao.h"



int main(){
    int numero, retorno;

    printf("Digite um numero inteiro difernte de zero: \n");
    scanf("%d", &numero);

    retorno = verificar_numero(numero);
    
    if (retorno == 1) {
        printf("O numero eh positivo.\n");

    } else {
        printf("O numero eh negativo.\n");
    }

    return 0;
}