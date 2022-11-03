#include <stdio.h>

int main(){

    int numero, aux = 1, resultado = 1;  

    printf("Digite os numeros para fazer o produto, para encerrar o programa digite o valor zero.\n");

    while (aux != 0) {
        scanf("%d",&numero);

        if(numero != 0){
            resultado = resultado * numero;
        } 

        aux = numero;
    }

    printf("\nO produto dos numeros digitados foi: %d", resultado);

    return 0;
}