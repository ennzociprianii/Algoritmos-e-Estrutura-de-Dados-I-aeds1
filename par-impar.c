#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par.\n", numero);
    } else {
        printf("%d eh impar.\n", numero);
    }

    return 0;
}