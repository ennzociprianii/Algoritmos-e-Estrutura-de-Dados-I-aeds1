#include <stdio.h> 

void imprime (int numero, int atual) {
    printf("%0*s\n", atual+1, "*");
    if (atual >= numero){
        return estrela(total, atual + 1);
    }
    imprime(numero, atual + 1);
}


int main(){
    int numero;
    printf("Informe o valor: ");
    scanf("%d", &numero);

    imprime(numero,1);

    return 0;
}