#include <stdio.h>

int main(){

    int numero;

    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d eh positivo.\n", numero);
    } else {
        if (numero < 0 ) {
            printf("%d eh negativo.\n", numero);
        } else {
            printf("Zero.\n");
        }
    }


    return 0;
}