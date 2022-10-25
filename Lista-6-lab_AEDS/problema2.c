#include <stdio.h>

int main(){

    int numero, numero2;
    int fechar = 0;

    while (fechar =! 0) {

        printf("\nDigite os numeros:\n ");
        scanf("%d", &numero2);
        
        if (numero2 == 12345) {
            printf("ACESSO PERMITIDO.\n");
            break;
        } else {
            printf("ACESSO NEGADO.\n");
        }

    }

    return 0;
}
