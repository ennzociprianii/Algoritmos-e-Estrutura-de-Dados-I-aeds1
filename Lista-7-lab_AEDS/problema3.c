#include <stdio.h>

int main(){

    int numero = 0, contador, soma = 0, m = 0;

    printf("Digite um numero para verificar se ele eh perfeito ou nao: \n");
    scanf("%d", &numero);

    for (contador = 1; contador < numero; contador++){
        if (numero % contador == 0) {
            soma += contador;
            if (soma == numero){
                m = 1;
            }
        }            
    } 

    if (m) {
        printf("O numero eh perfeito.\n");  
    } else {
        printf("O numero nao eh perfeito.\n");  
        }
        
    return 0;
}